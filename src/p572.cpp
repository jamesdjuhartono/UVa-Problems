#include <iostream>

using namespace std;

int m, n;
char grid[101][101];

void dfs(int r, int c)
{
    if(r < 0 || r >= m || c < 0 || c >= n || grid[r][c] == '*')
        return;

    grid[r][c] = '*';
    dfs(r-1, c);    //left
    dfs(r+1, c);    //right
    dfs(r, c-1);    //top
    dfs(r, c+1);    //bot
    dfs(r-1, c-1);  //top-left
    dfs(r-1, c+1);  //bot-left
    dfs(r+1, c-1);  //top-right
    dfs(r+1, c+1);  //bot-right

}

int main()
{
    int count;
    while(cin >> m >> n)
    {
        count = 0;
        if(m == 0)  break;

        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                cin >> grid[i][j];

        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(grid[i][j] == '@'){
                    count++;
                    dfs(i,j);
                }
        cout << count << endl;
    }
    return 0;
}
