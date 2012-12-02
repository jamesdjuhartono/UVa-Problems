#include <iostream>
#include <string.h>

using namespace std;

bool prime[1000000];

void fill_prime()
{
    memset(prime,true,sizeof prime);

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

int numDiffPF(int n)
{
    int count = 0;
    bool check[1000001];

    memset(check,false,sizeof check);

    for(int i = 2; i <= n; i++)
    {
        if(!check[i] && prime[i] && n%i == 0)
        {
            check[i] = true;
            check[n/i] = true;
            count++;
            if(prime[n/i] && n/i != i)  count++;
        }
    }
    return count;
}

int main()
{
    int inp;
    fill_prime();

    while(cin >> inp && inp)
        cout << inp << " : " << numDiffPF(inp) << endl;

    return 0;
}
