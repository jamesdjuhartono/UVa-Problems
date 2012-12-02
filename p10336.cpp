#include <iostream>
#include <algorithm>

using namespace std;

struct words
{
    char ch;
    int freq;
} arr[26];

bool comp(words a, words b)
{
    if(a.freq > b.freq) return true;
    else if(a.freq == b.freq && (int)a.ch < (int)b.ch) return true;
    return false;
}

int m, n;
char grid[100][100];
bool vis[100][100];

void dfs(int r, int c, char curr)
{
    if(r < 0 || r >= m || c < 0 || c >= n || grid[r][c] != curr || vis[r][c])
        return;

    vis[r][c] = true;

    dfs(r-1, c, curr);    //left
    dfs(r+1, c, curr);    //right
    dfs(r, c-1, curr);    //top
    dfs(r, c+1, curr);    //bot
}

int main()
{
    int numCase;

    cin >> numCase;
    for(int i = 1; i <= numCase; i++)
    {
        for(int j = 0; j < 100; j++)
            for(int k = 0; k < 100; k++)
                vis[j][k] = false;

        for(int j = 0; j < 26; j++)
        {
            arr[j].ch = (char)j+97;
            arr[j].freq = 0;
        }

        cin >> m >> n;
        for(int j = 0; j < m; j++)
            for(int k = 0; k < n; k++)
                cin >> grid[j][k];

        for(int j = 0; j < m; j++)
        {
            for(int k = 0; k < n; k++)
            {
                if(!vis[j][k])
                {
                    dfs(j,k,grid[j][k]);
                    arr[(int)grid[j][k] - 97].ch = grid[j][k];
                    arr[(int)grid[j][k] - 97].freq++;
                }
            }
        }
        sort(arr, arr+26, comp);

        cout << "World #" << i << endl;
        for(int j = 0; j < 26; j++)
            if(arr[j].freq != 0)
                cout << arr[j].ch << ": " << arr[j].freq << endl;
    }

    return 0;
}
