#include <math.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int row[9], TC, a, b, lineCounter;

bool place (int col, int tryrow)
{
    for(int prev = 1; prev < col; prev++)
        if(row[prev] == tryrow || (fabs(row[prev] -tryrow) == fabs(prev-col)))
            return false;
    return true;
}

void backtrack(int col)
{
    for(int tryrow = 1; tryrow <= 8; tryrow++)
        if(place(col,tryrow))
        {
            row[col] = tryrow;
            if(col == 8 && row[b] == a)
            {
                printf("%2d      %d", ++lineCounter, row[1]);
                for(int j = 2; j <= 8; j++) printf(" %d",row[j]);
                printf("\n");
            }
            else
                backtrack(col+1);
        }
}

int main()
{
    scanf("%d",&TC);
    for(int i = 0; i < TC; i++)
    {
        scanf("%d %d", &a, &b);
        memset(row, 0, sizeof row);
        lineCounter = 0;
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");
        backtrack(1);
        if(i != TC-1)   printf("\n");
    }
    return 0;
}
