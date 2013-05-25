#include <math.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int val[9][9], row[9], TC, a, b, maxScore;

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
                int score = 0;
                for(int j = 1; j <= 8; j++)
                    score += val[row[j]][j];
                if(score > maxScore)    maxScore = score;
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
        maxScore = 0;
        memset(row, 0, sizeof row);
        for(int j = 1; j <= 8; j++)
            for(int k = 1; k <= 8; k++)
                scanf("%d",&val[j][k]);

        for(int j = 1; j <= 8; j++){
            for(int k = 1; k <=8 ;k++){
                a = j;
                b = k;
                backtrack(1);
            }
        }
        printf("%5d\n",maxScore);
    }
    return 0;
}
