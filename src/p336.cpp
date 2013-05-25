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

int main(){
	int n, casenum = 1;
	map<int, vi> adjList;
	
	while(scanf("%d", &n) != EOF && n != 0){
		adjList.clear();
		set<int> nodes;
		for(int i = 0; i < n; i++){
			int a, b;
			scanf("%d %d", &a, &b);
			adjList[a].push_back(b);
			adjList[b].push_back(a);
			nodes.insert(a);
			nodes.insert(b);
		}

		int id, ttl, cnt;
		while(scanf("%d %d", &id, &ttl) != EOF && (id != 0 || ttl != 0)){

			cnt = 0;
			
			queue<ii> q;
			q.push(ii(id,0));

			map<int, bool> visited;
			for (set<int>::iterator it = nodes.begin(); it != nodes.end(); ++it){
    			visited[*it] = false;
    		}

			while(!q.empty()){
				ii curr = q.front();
				q.pop();
				if(visited[curr.first]) continue;
				if(curr.second > ttl) break;

				cnt++;
				visited[curr.first] = true;
				
				vi adj = adjList[curr.first];
				for(int i = 0; i < adj.size(); i++){
					if(!visited[adj[i]]){
						q.push(ii(adj[i], curr.second+1));
					}
				}
			}
			printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", casenum++, nodes.size()-cnt, id, ttl);
		}
	}
}
