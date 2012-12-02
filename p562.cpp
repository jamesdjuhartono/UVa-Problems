#include <iostream>
#include <string.h>
#include <math.h>
#include <limits.h>

#define MAXCOINS 100
#define MAXCENTS 500
#define MAXSUM MAXCOINS * MAXCENTS

using namespace std;

int m, mem[MAXSUM + 1];

/*THIS IS THE RECURSIVE SOLUTION. IT WORKS, BUT TOO SLOW :(
int max(int x, int y)
{
    if(x > y)   return x;
    else        return y;
}

int value(int id, int remVal)
{
    if(remVal == 0) return 0;
    if(id == m)     return 0;
    if(coinVal[id] > remVal)    return value(id+1, remVal);
    return  max(value(id+1, remVal), coinVal[id] + value(id+1, remVal-coinVal[id]));
}*/

int main()
{
    int numCase, val, sum, min;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        memset(mem,0,sizeof mem);
        mem[0] = 1;

        cin >> m;
        sum = 0;
        for(int j = 0; j < m; j++)
        {
            cin >> val;
            sum += val;

            for(int k = MAXSUM - val; k >= 0; k--)
                if(mem[k])  mem[k+val] = 1;
        }

        min = INT_MAX;

        for (int j = 0; j <= sum; j++)
            if (mem[j] && fabs(2*j - sum) < min)
                min = fabs(2*j - sum);

        cout << min << endl;
    }
    return 0;
}
