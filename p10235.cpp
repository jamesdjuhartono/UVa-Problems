#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

bool primes[1000000];

void fill_prime()
{
    memset(primes, true, sizeof primes);
    primes[0] = false;
    primes[1] = false;

    for(int i = 2; i < 1000000; i++){
        if(primes[i]){
            for(int j = 2*i; j < 1000000; j+= i)
                primes[j] = false;
        }
    }
}

int reverse(int x)
{
    char rev[10];
    int i = 0, n;

    while(x)
    {
        rev[i++] = (x % 10) + '0';
        x /= 10;
    }
    rev[i] = 0;
    n = atoi(rev);

    return n;
}

int main()
{
    int input;
    fill_prime();

    while(cin >> input)
    {
        if(primes[input])
        {
            int rev = reverse(input);
            if(rev != input && primes[rev])
                cout << input << " is emirp." << endl;
            else
                cout << input << " is prime." << endl;
        }
        else
            cout << input << " is not prime." << endl;
    }

    return 0;
}
