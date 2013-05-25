#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n, min, ans;
    char grid[1010][1010];

    while(cin >> n)
    {
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> grid[i][j];

        ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == '1')
                {
                    min = 2*n;
                    for(int k = 0; k < n; k++)
                        for(int m = 0; m < n; m++)
                            if(grid[k][m] == '3' && fabs(k-i) + fabs(m-j) < min)
                                min = fabs(k-i) + fabs(m-j);

                    if(min > ans)   ans = min;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
