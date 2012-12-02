#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>

using namespace std;

string convert(string input, int orig_base, int dest_base)
{
    char ch;
    string output;
    int temp, res;

    output = "";
    res = 0;
    for(int i = input.length()-1; i >= 0; i--)
    {
        ch = input.at(i);
        if(ch =='0') temp = 0;
        else if(ch == '1') temp = 1;
        else if(ch == '2') temp = 2;
        else if(ch == '3') temp = 3;
        else if(ch == '4') temp = 4;
        else if(ch == '5') temp = 5;
        else if(ch == '6') temp = 6;
        else if(ch == '7') temp = 7;
        else if(ch == '8') temp = 8;
        else if(ch == '9') temp = 9;
        else if(ch == 'A') temp = 10;
        else if(ch == 'B') temp = 11;
        else if(ch == 'C') temp = 12;
        else if(ch == 'D') temp = 13;
        else if(ch == 'E') temp = 14;
        else if(ch == 'F') temp = 15;

        res += temp*pow(orig_base, input.length()-i-1);
    }

    if(res == 0)    output = "0";

    while(res > 0)
    {
        temp = res % dest_base;
        if(temp == 0) ch = '0';
        else if(temp == 1) ch = '1';
        else if(temp == 2) ch = '2';
        else if(temp == 3) ch = '3';
        else if(temp == 4) ch = '4';
        else if(temp == 5) ch = '5';
        else if(temp == 6) ch = '6';
        else if(temp == 7) ch = '7';
        else if(temp == 8) ch = '8';
        else if(temp == 9) ch = '9';
        else if(temp == 10) ch = 'A';
        else if(temp == 11) ch = 'B';
        else if(temp == 12) ch = 'C';
        else if(temp == 13) ch = 'D';
        else if(temp == 14) ch = 'E';
        else if(temp == 15) ch = 'F';

        output = ch + output;

        res /= dest_base;
    }

    if(output.length() > 7) output = "ERROR";
    while(output.length() < 7)
        output = " " + output;

    return output;
}

int main()
{
    string input, output;
    int orig_base, dest_base;

    while(cin >> input >> orig_base >> dest_base)
    {
        output = convert(input,orig_base,dest_base);
        cout << output << endl;
    }

    return 0;
}
