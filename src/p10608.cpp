#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cctype>
#include <climits>
#include <string>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define INF	(int)1e9
#define EPS 1e-9

bool visited[30001];
vector<vi> adjList;

int bfs(int v){
	int count = 0;
	queue<int> q;

	q.push(v);

	while(!q.empty()){
		int curr = q.front();
		q.pop();
		if(!visited[curr]){
			visited[curr] = true;
			count++;
			vi neighbours = adjList[curr];
			for(size_t i = 0; i < neighbours.size(); i++){
				q.push(neighbours[i]);
			}
		}
	}
	return count;
}

int main(){
	int tc;
	scanf("%d", &tc);
	while(tc-- > 0){
		int n, m;
		scanf("%d %d", &n, &m);

		adjList.clear();
		adjList.assign(n+1, vi());

		for(int i = 0; i < m; i++){
			int a, b;
			scanf("%d %d", &a, &b);
			adjList[a].push_back(b);
			adjList[b].push_back(a);
		}

		fill(visited, visited+n, false);
		int maxval = 0;

		for(int i = 1; i <= n; i++){
			if(!visited[i]){
				maxval = max(bfs(i), maxval);
			}
		}

		printf("%d\n", maxval);
	}
}