#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int gcd(int a, int b){  return (b == 0 ? a : gcd(b, a%b));}

int convert(string s)
{
    int l = s.length();
    int num = 0;
    for(int i = 0; i < l; i++)
        num += (s[i] - 48)* pow(2,l-1-i);

    return num;
}

int main()
{
    int numCase, n, m;
    string num1, num2;

    cin >> numCase;
    for(int i = 1; i <= numCase; i++)
    {
        cin >> num1 >> num2;
        n = convert(num1);
        m = convert(num2);

        //cout << n << " " << m << endl;

        cout << "Pair #" << i << ": ";
        if(gcd(n,m) > 1)    cout << "All you need is love!" << endl;
        else                cout << "Love is not all you need!" << endl;
    }
    return 0;
}
