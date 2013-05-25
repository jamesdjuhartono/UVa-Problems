#include <iostream>
#include <stdio.h>
#include <limits>
#include <algorithm>

using namespace std;

#define MAX_INT (numeric_limits<int>::max()/3)

int dist[21][21];

void calc()
{
    for(int k = 1; k < 21; k++)
        for(int i = 1; i < 21; i++)
            for(int j = 1; j < 21; j++)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

}

int main()
{
    int a, b, n, numBorders, numQuery, numCase = 1;

    while(cin >> numBorders)
    {
        for(int i = 0; i < 21; i++)
            for(int j = 0; j < 21; j++)
                dist[i][j] = MAX_INT;

        for(int i = 1; i <= 19; i++)
        {
            if(i != 1)  cin >> numBorders;

            for(int j = 0; j < numBorders; j++)
            {
                cin >> n;
                dist[i][n] = 1;
                dist[n][i] = 1;
            }
        }

        calc();
        cin >> numQuery;
        cout << "Test Set #" << numCase++ << endl;
        for(int i = 0; i < numQuery; i++)
        {
            cin >> a >> b;
            printf("%2d to %2d: %d\n",a,b,dist[a][b]);
        }
        cout << endl;
    }

    return 0;
}
