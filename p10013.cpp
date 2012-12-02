#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int res[1000001];

int main()
{
    int numCase, size, num1, num2;

    scanf("%d",&numCase);

    for(int i = 0; i < numCase; i++)
    {
        scanf("%d",&size);

        memset(res,0,size);

        for(int j = 1; j <= size; j++)
        {
            scanf("%d %d",&num1,&num2);
            res[j] = num1 + num2;
        }

        for(int j = size; j >= 0; j--)
            if(res[j] > 9)
            {
                res[j] = res[j]%10;
                res[j-1] += 1;
            }

        if(res[0] != 0) printf("%d",res[0]);

        for(int j = 1; j <= size; j++)
            printf("%d",res[j]);

        printf("\n");
        if(i != numCase - 1)    printf("\n");
    }

    return 0;
}
