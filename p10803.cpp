#include <stdio.h>
#include <iostream>
#include <math.h>

#define INF 1000000
#define SAFE_DIST 100

using namespace std;

int main()
{
    double dist[101][101], ans;
    int x[101], y[101];
    int numCase, numTown, distance, num = 1;

    cin >> numCase;
    while(numCase--)
    {
        cin >> numTown;
        for(int i = 0; i < numTown; i++)
            cin >> x[i] >> y[i];

        for(int i = 0; i < numTown; i++)
            dist[i][i] = 0.0;

        for(int i = 0; i < numTown; i++)
        {
            for(int j = 0; j < i; j++)
            {
                distance = pow(x[i]-x[j],2) + pow(y[i]-y[j],2);
                if(distance <= SAFE_DIST)
                    dist[i][j] = dist[j][i] = sqrt(distance);
                else
                    dist[i][j] = dist[j][i] = INF;
            }
        }

        for(int k = 0; k < numTown; k++)
            for(int i = 0; i < numTown; i++)
                for(int j = 0; j < numTown; j++)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

        ans = 0;
        for(int i = 0; i < numTown; i++)
            for(int j = 0; j < numTown; j++)
                if(i != j && ans < dist[i][j])
                    ans = max(ans,dist[i][j]);

        cout << "Case #" << num++ << ":" << endl;
        if(ans < INF)   printf("%.4lf\n",ans);
        else            cout << "Send Kurdy" << endl;

        cout << endl;
    }

    return 0;
}
