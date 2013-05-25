#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    ll memo[101];
    int input;

    memo[1] = 1;
    for(int i = 2; i <= 100; i++)
        memo[i] = memo[i-1] + i*i;

    while(cin >> input && input != 0)
        cout << memo[input] << endl;

    return 0;
}
