#include <iostream>
#include <stdio.h>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<char,int> table;
    int numCase, numEl, numLines;
    char ch;
    int val;
    double sum;
    string input;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> numEl;
        table.clear();
        sum = 0;

        for(int j = 0; j < numEl; j++)
        {
            cin >> ch >> val;
            table.insert(pair<char,int>(ch,val));
        }

        cin >> numLines;
        getline(cin,input);
        for(int j = 0; j < numLines; j++)
        {
            getline(cin,input);
            for(int k = 0; k < input.length(); k++)
                if(table.find(input.at(k)) != table.end())
                    sum += 0.01 * (double)table.find(input.at(k))->second;
        }
        printf("%.2f$\n",sum);
    }

    return 0;
}
