#include <iostream>
#include <string.h>

using namespace std;

int d(int n)
{
    int sum_digits, save_n;

    sum_digits = 0;
    save_n = n;

    while(n > 0)
    {
        sum_digits += n%10;
        n /= 10;
    }
    return save_n + sum_digits;
}

int main()
{
    bool dp[1000001];
    int x;

    memset(dp,false,sizeof dp);

    for(int i = 1; i <= 1000000; i++)
    {
        x = d(i);
        while(x <= 1000000 && !dp[x])
        {
            dp[x] = true;
            x = d(x);
        }
    }

    for(int i = 1; i <= 1000000; i++)
        if(!dp[i])  cout << i << endl;

    return 0;
}
