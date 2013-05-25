#include <iostream>
#include <string.h>
using namespace std;

long long memo[6][30005];
int N = 5, V, coinValue[5] = {1, 5, 10, 25, 50};

long long ways(int type, long long value)
{
    if (value == 0)              return 1;
    if (value < 0 || type == N)  return 0;
    if (memo[type][value] != -1) return memo[type][value];
    return memo[type][value] = ways(type + 1, value) + ways(type, value - coinValue[type]);
}

int main()
{
    long long res;
    memset(memo, -1, sizeof memo);
    while (cin >> V)
    {
        res = ways(0,V);
        if(res == 1)    cout << "There is only 1 way to produce " << V << " cents change." << endl;
        else            cout << "There are " << res << " ways to produce " << V << " cents change." << endl;
    }
    return 0;
}
