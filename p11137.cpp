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

typedef long long int ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define INF	(int)1e9
#define EPS 1e-9

int main(){
	int amt;
	int coins[22]; coins[0] = 0;
	for(int i = 1; i < 22; i++){
		coins[i] = pow(i,3);
	}

	ll dp[10001];
	memset(dp, 0, sizeof dp);
	dp[0] = 1;
	for(int i = 1; i < 22; i++){
		for(int j = coins[i]; j < 10001; j++){
			dp[j] += dp[j-coins[i]];
		}
	}

	while(scanf("%d", &amt) != EOF){
		printf("%llu\n", dp[amt]);
	}
}
