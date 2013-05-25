#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main()
{
    queue<int> q;
    vector<int> v[2000];
    int p, d, numCase, a, b, gn[2000], f, l;

    cin >> numCase;
    for(int j = 0; j < numCase; j++)
    {
        cin >> p >> d;
        for(int i = 0; i < d; i++)
        {
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }

        for(int i = 1; i < p; i++)  gn[i]=-1;
        gn[0]=0;

        q.push(0);

        while(!q.empty())
        {
            f = q.front();
            q.pop();
            l = v[f].size();
            for(int i = 0; i < l;i++)
                if(gn[v[f][i]] == -1)
                {
                    gn[v[f][i]] = gn[f]+1;
                    q.push(v[f][i]);
                }
        }
        for(int i = 1; i < p; i++)
            cout << gn[i] << endl;

        for(int i = 0; i < p; i++)  v[i].clear();
        if(j != numCase - 1) cout << endl;
    }
    return 0;
}
