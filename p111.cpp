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

	int n;
	scanf("%d", &n);
	int correct[n+1];
	
	for(int i = 1; i < n+1; i++){
		int num;
		scanf("%d", &num);
		correct[num] = i;
	}

	while(true){
		int first;
		if(scanf("%d", &first) == EOF){
			break;
		}
		int curr[n+1]; curr[first] = 1;
		for(int i = 2; i < n+1; i++){
			int num;
			scanf("%d", &num);
			curr[num] = i;
		}

		int dp[n+1][n+1];
		for(int i = 0; i < n+1; i++){
			for(int j = 0; j < n+1; j++){
				dp[i][j] = 0;
			}
		}
		for(int i = 1; i < n+1; i++){
			for(int j = 1; j < n+1; j++){
				if(curr[i] == correct[j]){
					dp[i][j] = dp[i-1][j-1] + 1;
				} else{
					dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
				}
			}
		}
		printf("%d\n", dp[n][n]);
	}
}
