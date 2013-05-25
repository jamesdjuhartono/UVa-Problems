#include <iostream>
#include <stdio.h>
using namespace std;

int findMaxCycle(long int x, long int y)
{
    long int result[y-x+1];
    long int j;
    int count;
    int max = 0;

    for(long int i = x; i <= y; i++)
    {
        j = i;
        count = 1;
        while(j != 1)
        {
            if(j % 2 == 1)
                j = 3*j + 1;
            else
                j = j/2;
            count++;
        }
        result[i-x] = count;
    }

    for(long int i = 0; i < y-x+1; i++)
    {
        if(result[i] > max)
            max = result[i];
    }
    return max;
}

int main()
{
    long int x, y, temp, ans;

    while(scanf("%li %li",&x,&y) != EOF)
    {
        printf("%li %li",x,y);
        if(x > y)
        {
            temp = x;
            x = y;
            y = temp;
        }
        ans = findMaxCycle(x,y);
        printf(" %li\n",ans);
    }
    return 0;
}
