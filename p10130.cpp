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
	int tc;
	scanf("%d", &tc);
	while(tc-- > 0){
		int n;
		scanf("%d", &n);
		int w[n+1], p[n+1];
		for(int i = 1; i <= n; i++){
			scanf("%d %d", &p[i], &w[i]);
		}

		int g;
		scanf("%d", &g);
		int mw[g+1];

		for(int i = 1; i <= g; i++){
			scanf("%d", &mw[i]);
		}

		int dp[31][n+1];
		for(int i = 0; i < 31; i++){
			for(int j = 0; j < n+1; j++){
				dp[i][j] = 0;
			}
		}

		for(int i = 1; i < 31; i++){
			for(int j = 1; j < n+1; j++){
				if(i >= w[j]){
					dp[i][j] = max(dp[i][j-1], p[j] + dp[i-w[j]][j-1]);
				} else{
					dp[i][j] = dp[i][j-1];
				}
			}
		}

		int sum = 0;
		for(int i = 1; i <= g; i++){
			sum += dp[mw[i]][n];
		}
		printf("%d\n", sum);
	}
}
