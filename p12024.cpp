#include <iostream>

using namespace std;

int der[13], fact[13];

void fill_fact()
{
    fact[0] = 1;
    fact[1] = 1;
    for(int i = 2; i < 13; i++)
        fact[i] = i*fact[i-1];
}

//der = derangements
void fill_der()
{
    der[1] = 0;
    der[2] = 1;
    for(int i = 3; i < 13; i++)
        der[i] = (i-1)*(der[i-1] + der[i-2]);
}

int main()
{
    int numCase, n;

    fill_fact();
    fill_der();

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> n;
        cout << der[n] << "/" << fact[n] << endl;
    }
    return 0;
}
