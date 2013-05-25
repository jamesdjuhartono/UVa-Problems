#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

bool diff_digits(int a, int b)
{
    bool digits[10];
    memset(digits,false,sizeof digits);

    if(b < 10000)   digits[0] = true;

    while(a > 0)
    {
        if(!digits[a%10])
            digits[a%10] = true;
        else
            return false;
        a /= 10;
    }

    while(b > 0)
    {
        if(!digits[b%10])
            digits[b%10] = true;
        else
            return false;
        b /= 10;
    }
    return true;
}

int main()
{
    int input, divisor, numerator;
    bool first = true, _print;

    while(cin >> input)
    {
        if(input == 0)  break;

        if(!first)  cout << endl;
        else        first = false;


        _print = false;
        for(int i = 1234; i <= 98765; i++)
        {
            divisor = i;
            numerator = input*divisor;
            if(numerator > 9999 && numerator < 100000 && diff_digits(numerator, divisor)){

                if(divisor < 10000)
                    printf("%5d / 0%4d = %d\n",numerator, divisor, input);
                else
                    printf("%5d / %5d = %d\n",numerator, divisor, input);
                _print = true;
            }
        }
        if(!_print)
            cout << "There are no solutions for " << input << "." << endl;
    }
    return 0;
}
