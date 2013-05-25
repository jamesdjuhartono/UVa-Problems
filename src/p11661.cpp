#include <iostream>
#include <stdio.h>
#include <math.h>

#define MAX_SIZE 2000000

using namespace std;

int main()
{
    char seq[MAX_SIZE];
    int size, r_pos, d_pos, min;

    scanf("%d",&size);
    while(size != 0)
    {
        min = size;
        r_pos = -1;
        d_pos = -1;

        for(int i = 0; i < size; i++)
        {
            scanf(" %c",&seq[i]);
            if(seq[i] == 'R')       r_pos = i;
            else if(seq[i] == 'D')  d_pos = i;
            else if(seq[i] == 'Z')  min = 0;

            if(r_pos >= 0 && d_pos >= 0 && fabs(r_pos-d_pos) < min)
                min = fabs(r_pos - d_pos);
        }

        cout << min << endl;
        scanf("%d",&size);
    }

    return 0;
}
