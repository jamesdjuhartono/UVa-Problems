#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int size, inp;
    int row_sum[101], col_sum[101];
    int row_miss, col_miss;
    int rem_row, rem_col;

    while(cin >> size && size)
    {
        for(int i = 0; i < size; i++)
        {
            row_sum[i] = 0;
            col_sum[i] = 0;
        }
        row_miss = 0;
        col_miss = 0;
        rem_col = 0;
        rem_row = 0;

        for(int i = 0; i < size; i++)
        {
            for(int j = 0; j < size; j++)
            {
                cin >> inp;
                row_sum[i] += inp;
                col_sum[j] += inp;
            }
        }
        for(int i = 0; i < size; i++)
        {
            if(row_sum[i] % 2 == 1)
            {
                row_miss++;
                rem_row = i;
            }
            if(col_sum[i] % 2 == 1)
            {
                col_miss++;
                rem_col = i;
            }
        }

        if(row_miss == 0 && col_miss == 0)
            cout<<"OK"<<endl;
        else if(row_miss == 1 && col_miss == 1)
            cout<<"Change bit ("<<rem_row+1<<","<<rem_col+1<<")"<<endl;
        else
            cout<<"Corrupt"<<endl;
    }

    return 0;
}
