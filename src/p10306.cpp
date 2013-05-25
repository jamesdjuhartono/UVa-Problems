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

struct ecoin
{
	int xval, yval;
	ecoin(int x, int y): xval(x), yval(y) {}
};

int main(){
	int tc;
	scanf("%d", &tc);
	while(tc-- > 0){
		int m, s;
		vector<ecoin> coins;

		scanf("%d %d", &m, &s);
		for(int i = 0; i < m; i++){
			int x, y;
			scanf("%d %d", &x, &y);
			coins.push_back(ecoin(x,y));
		}
		
		int dp[s+1][s+1];
		int minsum = INF;
		int square = s*s;

		for(int i = 0; i < s+1; i++){
			for(int j = 0; j < s+1; j++){
				dp[i][j] = INF;
			}
		}
		dp[0][0] = 0;

		for(int i = 0; i < m; i++){
			for(int j = coins[i].xval; j < s+1; j++){
				for(int k = coins[i].yval; k < s+1; k++){
					dp[j][k] = min(dp[j][k], 1 + dp[j-coins[i].xval][k-coins[i].yval]);
				}
			}
		}

		for(int j = 0; j < s+1; j++){
			for(int k = 0; k < s+1; k++){
				if(j*j + k*k == square) minsum = min(minsum, dp[j][k]);
			}
		}

		if(minsum == INF) printf("not possible\n");
		else printf("%d\n", minsum);
	}
}
