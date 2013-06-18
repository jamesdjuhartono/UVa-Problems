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

int n, x[11], y[11], dist[11][11], memo[11][1<<11];

int tsp(int pos, int bitmask){
	if(bitmask == (1 << (n+1)) - 1){
		return dist[pos][0];
	} else if(memo[pos][bitmask] != -1){
		return memo[pos][bitmask];
	}

	int ans = INF;
	for(int nxt = 0; nxt <= n; nxt++){
		if(nxt != pos && !(bitmask & (1 << nxt))){
			ans = min(ans, dist[pos][nxt] + tsp(nxt, bitmask | (1 << nxt)));
		}
	}

	memo[pos][bitmask] = ans;
	return ans;
}

int main(){
	int tc;
	scanf("%d", &tc);

	while(tc-- > 0){
		int xsize, ysize;
		scanf("%d %d", &xsize, &ysize);
		scanf("%d %d", &x[0], &y[0]);

		scanf("%d", &n);
		for(int i = 1; i <= n; i++){
			scanf("%d %d", &x[i], &y[i]);
		}

		for(int i = 0; i <= n; i++){
			for(int j = 0; j <= n; j++){
				dist[i][j] = abs(x[i] - x[j]) + abs(y[i] - y[j]);
			}
		}

		memset(memo, -1, sizeof memo);
		printf("The shortest path has length %d\n", tsp(0,1));
	}
}