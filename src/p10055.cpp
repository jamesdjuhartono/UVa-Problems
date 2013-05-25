#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    unsigned long long x,y;

    while(scanf("%llu %llu",&x,&y) != EOF)
    {
        if(x > y)
            printf("%llu\n", x-y);
        else
            printf("%llu\n", y-x);
    }

    return 0;
}
