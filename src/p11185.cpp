#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    int temp;
    long long input;
    string output;

    while(cin >> input)
    {
        if(input < 0)   break;

        output = "";

        if(input == 0)  output = "0";
        else
        {
            while(input >= 3)
            {
                temp = input%3;
                input /= 3;
                if(temp == 1)   output = '1' + output;
                else if(temp == 2)  output = '2' + output;
                else            output = '0' + output;
            }
            if(input == 1)   output = '1' + output;
            else if(input == 2)  output = '2' + output;
        }
        cout << output << endl;
    }

    return 0;
}
