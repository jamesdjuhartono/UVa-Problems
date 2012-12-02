#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

long long memo[11][30005];
int N = 11, V, coinValue[11] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
double input;

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
    while (cin >> input)
    {
        V = (int)(input*100 + 0.5);
        //cout << V << endl;
        if(V == 0)  break;
        res = ways(0,V);
        printf("%6.2f%17lld\n",input,res);
    }
    return 0;
}
