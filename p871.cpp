#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int m, n;
char grid[26][26];

int dfs(int r, int c)
{
    if(r < 0 || r >= m || c < 0 || c >= n || grid[r][c] == '0')
        return 0;

    int ans = 1;
    grid[r][c] = '0';

    ans += dfs(r-1, c);    //left
    ans += dfs(r+1, c);    //right
    ans += dfs(r, c-1);    //top
    ans += dfs(r, c+1);    //bot
    ans += dfs(r-1, c-1);  //top-left
    ans += dfs(r-1, c+1);  //bot-left
    ans += dfs(r+1, c-1);  //top-right
    ans += dfs(r+1, c+1);  //bot-right

    return ans;
}

int main()
{
    int max, numCase, res;
    char inp[26];

    cin >> numCase;
    getchar();
    getchar();


    for(int z = 0; z < numCase; z++)
    {
        m = 0;
        max = 0;

        while(gets(inp) && inp[0])
        {
            max = 0;
            n = strlen(inp);

            for(int j = 0; j < n; j++)
                grid[m][j] = inp[j];

            m++;
        }

        //cout << m << " " << n << endl;
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(grid[i][j] == '1'){
                    res = dfs(i,j);
                    if(res > max)   max = res;
                }
        cout << max << endl;
        if(z != numCase - 1)    cout << endl;
    }
    return 0;
}
