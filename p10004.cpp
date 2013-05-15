# include <iostream>
# include <fstream>
# include <sstream>
# include <algorithm>
# include <numeric>
# include <cstdio>
# include <cmath>
# include <cstdlib>
# include <cstring>
# include <vector>
# include <list>
# include <set>
# include <map>
# include <stack>
# include <queue>
# include <cctype>
# include <climits>

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int main(){
	while(true){
		int n, l;
		vector<vi> adjList;
		scanf("%d",&n);
		if (n == 0){
			break;
		}

		scanf("%d",&l);

		adjList.assign(n, vi());
		for (int i = 0; i < l; ++i){
			int a, b;
			scanf("%d %d", &a, &b);
			adjList[a].push_back(b);
		}

		queue<int> q;
		q.push(0);

		map<int, int> dist; dist[0] = 0;
		bool isBipartite = true;

		while(!q.empty()){
			int u = q.front(); q.pop();
			for (int i = 0; i < (int)adjList[u].size(); ++i){
				int v = adjList[u][i];
				if(!dist.count(v)){
					dist[v] = 1 - dist[u];
					q.push(v);
				} else if (dist[v] == dist[u]){
					isBipartite = false;
				}
			}
		}
		if (isBipartite){
			printf("BICOLORABLE.\n");
		} else{
			printf("NOT BICOLORABLE.\n");
		}
	}
}
