#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int x,y, count = 0;
    int temp = 0;
    bool inp = true;

    cin >> x >> y;

    while(inp)
    {
        if(x == 0 && y == 0)
            break;
        while(x > 0 || y > 0)
        {
            if(x%10 + y%10 + temp >= 10)
            {
                temp = 1;
                count++;
            }
            else
                temp = 0;
            x /= 10;
            y /= 10;
        }

        if(count==0) printf("No carry operation.\n");
        else if(count==1) printf("1 carry operation.\n");
        else printf("%d carry operations.\n",count);

        cin >> x >> y;
        count = 0;
        temp = 0;
    }

    return 0;
}
