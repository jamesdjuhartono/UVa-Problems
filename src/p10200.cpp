#include <bitset>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <math.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

ll _sieve_size;
bitset<1000010> bs;
vi primes;

void sieve(ll upperbound)
{
    _sieve_size = upperbound + 1;
    bs.set();
    bs[0] = bs[1] = 0;

    for(ll i = 2; i <= _sieve_size; i++)
    {
        if(bs[i])
        {
            for(ll j = i*i; j <= _sieve_size; j+= i)
                bs[j] = 0;
            primes.push_back((int)i);
        }
    }
}

bool isPrime(ll N)
{
    if(N <= _sieve_size)    return bs[N];

    int index = 0;
    while(primes[index] * primes[index] <= N)
    {
        if(N%primes[index] == 0)    return false;
        index++;
    }

    //for(int i = 0; i < (int)primes.size(); i++)
        //if(N%primes[i] == 0)    return false;

    return true;
}

int main()
{
    int a, b, count;
    bool memo[10001];
    double res;
    ll num;

    sieve(1000000);

    memset(memo, false, sizeof memo);
    for(int i = 0; i < 10001; i++)
    {
        num = i*i + i + 41;
        if(isPrime(num))
            memo[i] = true;
    }

    while(scanf ("%d %d", &a, &b) != EOF)
    {
        count = 0;
        for(int i = a; i <= b; i++)
            if(memo[i]) count++;

        res = (count * 100.0) / (double)(b - a + 1) + 1e-9;

        printf("%.2f\n",res);
    }
    return 0;
}
