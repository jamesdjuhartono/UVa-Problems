#include <iostream>
using namespace std;

int sumDigit(int n)
{
    int sum = 0;

    while(n/10 != 0)
    {
        sum += n%10;
        n /= 10;
    }
    sum += n;

    return sum;
}

int main()
{
    long x, res;

    cin >> x;
    while(x != 0)
    {
        res = sumDigit(x);
        while(res >= 10)
        {
            res = sumDigit(res);
        }
        cout << res << endl;
        cin >> x;
    }
    return 0;
}
