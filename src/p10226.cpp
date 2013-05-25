#include <iostream>
#include <stdio.h>
#include <string>
#include <map>

using namespace std;

int main()
{
    char buffer[40];
    map<string,int> freq;
    map<string,int>::iterator it;
    int numCase, count;

    cin >> numCase;
    getchar();
    getchar();

    for(int i = 0; i < numCase; i++)
    {
        freq.clear();
        count = 0;
        while(gets(buffer) && buffer[0])
        {
            string input(buffer);
            if(!freq[input])
                freq[input] = 1;
            else
                freq[input]++;

            count++;
        }

        for(it = freq.begin(); it != freq.end(); it++)
        {
            cout << (*it).first;
            printf(" %.4f\n",((double)(*it).second / (double)count)*100);
        }

        if(i != numCase-1)  cout << endl;
    }

    return 0;
}
