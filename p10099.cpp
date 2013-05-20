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

vi pset(1000);

void initSet(int N){
	for (int i = 0; i < N; i++){
		pset[i] = i;
	}
}

int findSet(int i){
	return (pset[i] == i) ? i : (pset[i] = findSet(pset[i]));
}

int main(){

	int V, E, casenum = 1;

	while(scanf("%d %d", &V, &E) != EOF && (V != 0 || E != 0)){
		vector<pair<int,ii> > EdgeList;
		for(int i = 0; i < E; i++){
			int u,v,w;
			scanf("%d %d %d", &u, &v, &w);
			EdgeList.push_back(make_pair(w, ii(u,v)));
		}

		sort(EdgeList.begin(),EdgeList.end());
		reverse(EdgeList.begin(), EdgeList.end());
		
		int src, dest, weight;
		scanf("%d %d %d", &src, &dest, &weight);

		int p,q, ans;
		initSet(V);

		for (int i = 0; i < E; i++) {
	    	p = findSet(EdgeList[i].second.first);
	    	q = findSet(EdgeList[i].second.second);

	    	if(p != q){
	    		pset[p] = q;
	    	}

	    	if(findSet(src) == findSet(dest)){
	    		EdgeList[i].first--;
	    		ans = ceil((double)weight/double(EdgeList[i].first));
	    		break;
	    	}
	  	}
	  	printf("Scenario #%d\n", casenum++);
	  	printf("Minimum Number of Trips = %d\n\n", ans);
	}
}
