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

#define MAXMONEY 10500

int main(){
	int m, n;
	while(scanf("%d %d", &m, &n) != EOF){
		int p[n+1], f[n+1], total = 0;

		for(int i = 1; i <= n; i++){
			scanf("%d %d", &p[i], &f[i]);
			total += p[i];
		}

		int dp[MAXMONEY];
		for(int i = 0; i < MAXMONEY; i++){
				dp[i] = -1;
		}
		dp[0] = 0;

		for(int i = 1; i < n+1; i++){
			for(int j = MAXMONEY; j >= p[i]; j--){
				dp[j] = max(dp[j], dp[j - p[i]] + f[i]);
			}
		}
		int ans = 0;
		for(int i = 0; i < 10201; i++){
			if((i > 2000 && m + 200 >= i) || i <= m){
				ans = max(ans, dp[i]);
			}
		}

		printf("%d\n", ans);
	}
}