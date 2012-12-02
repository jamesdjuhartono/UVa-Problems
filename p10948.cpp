#include <iostream>

using namespace std;

bool prime[1000000];

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

int main()
{
    int input, x;
    bool found;
    fill_prime();

    while(cin >> input)
    {
        found = false;
        if(input == 0)  break;

        for(x = 2; x <= input/2; x++)
            if(prime[x] && prime[input-x]){
                found = true;
                break;
            }

        if(found)   cout << input << ":" << endl << x << "+" << input-x << endl;
        else        cout << input << ":" << endl << "NO WAY!" << endl;
    }
    return 0;
}
