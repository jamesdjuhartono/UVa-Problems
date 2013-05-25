#include <iostream>
#include <string>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
        if(n%i == 0)
            return false;

    return true;
}

int main()
{
    string input;
    char ch;
    int sum;

    while(cin >> input)
    {
        sum = 0;
        for(int i = 0; i < input.length(); i++)
        {
            ch = input.at(i);
            if((int)ch >= 65 && (int)ch <= 90)
                sum += (int)ch - 38;
            else
                sum += (int)ch - 96;
        }
        if(isPrime(sum))
            cout << "It is a prime word." << endl;
        else
            cout << "It is not a prime word." << endl;
    }
    return 0;
}
