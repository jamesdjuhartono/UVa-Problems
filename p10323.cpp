#include <iostream>
using namespace std;

unsigned long long int factorial(int n)
{
    unsigned long long int res = 1;
    for(int i = n; i > 1; i--)
        res *= i;

    return res;
}

int main()
{
    int inp;

    while(cin >> inp)
    {
        if(inp > 13 || (inp < 0 && inp%2 != 0))
            cout << "Overflow!" << endl;
        else if(inp <= 7)
            cout << "Underflow!" << endl;
        else
            cout <<  factorial(inp) << endl;
    }
    return 0;
}
