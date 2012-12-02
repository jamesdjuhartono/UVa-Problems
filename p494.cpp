#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int count, flag;
    char ch;

    while(getline(cin,input))
    {
        count = 0;
        flag = 0;

        for(int i = 0; i < input.length(); i++)
        {
            ch = input.at(i);
            if(!flag && (((int)ch >= 65 && (int)ch <= 90) || ((int)ch >= 97 && (int)ch <= 122)))
            {
                count++;
                flag = 1;
            }
            else if((int)ch < 65 || (int)ch > 122 || ((int)ch > 90 && (int)ch < 97))
                flag = 0;
        }
        printf("%d\n",count);
    }

    return 0;
}
