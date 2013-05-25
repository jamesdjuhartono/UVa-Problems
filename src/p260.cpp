#include <iostream>
#include <string.h>

using namespace std;

int m, n;
char grid[201][201];
bool vis[201][201];
char output;

void dfs(int r, int c, char curr)
{
    if(r < 0 || r >= m || c < 0 || c >= n || grid[r][c] != curr || vis[r][c])
        return;
    if(c == n-1 && grid[r][c] == 'w')
    {
        output = 'W';
        return;
    }
    if(r == m-1 && grid[r][c] == 'b')
    {
        output = 'B';
        return;
    }

    vis[r][c] = true;
    dfs(r-1, c, curr);    //left
    dfs(r+1, c, curr);    //right
    dfs(r, c-1, curr);    //top
    dfs(r, c+1, curr);    //bot
    dfs(r-1, c-1, curr);  //top-left
    dfs(r+1, c+1, curr);  //bot-right
}

int main()
{
    int count, caseNum = 1;
    while(cin >> m)
    {
        if(m == 0)  break;
        count = 0;
        n = m;

        memset(vis, false, sizeof vis);

        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                cin >> grid[i][j];

        for(int i = 0; i < m; i++)
            if(!vis[0][i] && grid[0][i] == 'b')
                dfs(0,i,'b');

        for(int i = 0; i < n; i++)
            if(!vis[i][0] && grid[i][0] == 'w')
                dfs(i,0,'w');

        cout << caseNum++ << " " <<output << endl;
    }
    return 0;
}
