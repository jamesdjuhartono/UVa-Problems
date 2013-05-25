#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    int numCase;
    int countM, countF;
    string input;
    char dummy;

    scanf("%d",&numCase);
    gets(&dummy);
    for(int i = 0; i < numCase; i++)
    {
        getline(cin,input);
        countM = 0;
        countF = 0;

        for(int j = 0; j < input.length(); j++){
            if(input.at(j) == 'M')          countM++;
            else if(input.at(j) == 'F')     countF++;
        }


        if(countM == countF && countM > 1 && countF > 1)    cout << "LOOP" << endl;
        else                    cout << "NO LOOP" << endl;
    }

    return 0;
}
