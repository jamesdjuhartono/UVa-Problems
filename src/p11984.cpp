#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int numCase;
    int c, d;
    double res, temp;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> c >> d;
        temp = (double)9/(double)5*(double)c + 32;
        temp += (double)d;
        res = (double)(temp-32)*(double)5/(double)9;
        printf("Case %d: %.2f\n",i+1,res);
    }

    return 0;
}
