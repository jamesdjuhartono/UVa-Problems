#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    string input, output;
    char alphabet_table[26] = {'A','V','X','S','W','D','F','G','U','H','J','K','N','B','I','O','Q','E','A','R','Y','C','Q','Z','T','Z'};
    char digit_table[10] = {'9','`','1','2','3','4','5','6','7','8'};
    char ch;

    while(getline(cin,input))
    {
        output = "";
        for(int i = 0; i < input.length(); i++)
        {
            ch = input.at(i);

            if((int)ch >= 65 && (int)ch <= 90)
                output += alphabet_table[(int)ch - 65];
            else if((int)ch >= 48 && (int)ch <= 57)
                output += digit_table[(int)ch - 48];
            else
            {
                if(ch == ' ')       output += ' ';
                else if(ch == '-')  output += '0';
                else if(ch == '=')  output += '-';
                else if(ch == '[')  output += 'P';
                else if(ch == ']')  output += '[';
                else if(ch == '\\')  output += ']';
                else if(ch == ';')  output += 'L';
                else if(ch == '\'')  output += ';';
                else if(ch == ',')  output += 'M';
                else if(ch == '.')  output += ',';
                else if(ch == '/')  output += '.';

            }
        }
        cout << output << endl;
    }

    return 0;
}
