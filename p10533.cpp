#include <stdio.h>
#include <string.h>

using namespace std;

bool prime[1000000];
int dp[1000000];

void fill_prime()
{
    for(int i = 0; i < 1000000; i++)
        prime[i] = true;

    prime[0] = false;   prime[1] = false;
    for(int i = 2; i < 1000000; i++)
    {
        if(prime[i])
        {
            for(int j = 2*i; j < 1000000; j += i)
                prime[j] = false;
        }
    }
}

int sumDigit(int n)
{
    int ans = 0;
    while(n > 0)
    {
        ans += n%10;
        n /= 10;
    }
    return ans;
}

int main()
{
    int numCase, min, max, count;

    fill_prime();
    memset(dp,-1,sizeof dp);

    count = 0;
    for(int i = 0 ; i < 1000000; i++)
    {
        if(prime[i] && prime[sumDigit(i)])
            count++;
        dp[i] = count;
    }

    scanf("%d",&numCase);
    for(int i = 0; i < numCase; i++)
    {
        scanf("%d %d",&min,&max);
        count = dp[max] - dp[min];
        if(prime[min] && prime[sumDigit(min)])
            count++;
        printf("%d\n",count);
    }
    return 0;
}
