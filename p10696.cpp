#include <iostream>

using namespace std;

int f91(int n)
{
    if(n <= 100)
        return 91;
    else if(n >= 101)
        return n-10;
}

int main()
{
    int inp;

    while(cin >> inp && inp)
        cout << "f91(" << inp << ") = " << f91(inp) << endl;

    return 0;
}
