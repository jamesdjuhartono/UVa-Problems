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

int dp[110][110];

int main(){
	string s1, s2;
	int casenum = 1;

	while(getline(cin, s1) && s1 != "#"){
		getline(cin, s2);

		memset(dp, 0, sizeof dp);

		for(size_t i = 1; i < s1.length()+1; i++){
			for(size_t j = 1; j < s2.length()+1; j++){
				if(s1[i-1] == s2[j-1]){
					dp[i][j] = dp[i-1][j-1] + 1;
				} else{
					dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
				}
			}
		}

		printf("Case #%d: you can visit at most %d cities.\n", casenum++, dp[s1.length()][s2.length()]);
	}
}