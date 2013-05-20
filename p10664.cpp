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
	cin.ignore();

	while(tc-- > 0){
		vi weights;
		weights.push_back(0);
		int totalweight = 0;
		string inp;
		getline(cin, inp);
		istringstream iss(inp);
		int val;
		while(iss >> val){
			weights.push_back(val);
			totalweight += val;
		}

		if(totalweight % 2 == 1){
			printf("NO\n");
			continue;
		}

		int dp[totalweight+1][weights.size()];
		for(int i = 0; i < totalweight+1; i++){
			for(int j = 0; j < weights.size(); j++){
				dp[i][j] = 0;
			}
		}

		for(int i = 1; i <= totalweight; i++){
			for(int j = 1; j < weights.size(); j++){
				if(i >= weights[j]){
					dp[i][j] = max(dp[i][j-1], dp[i-weights[j]][j-1] + weights[j]);
				} else{
					dp[i][j] = dp[i][j-1];
				}
			}
		}
		
		if(dp[totalweight/2][weights.size()-1] == totalweight/2){
			printf("YES\n");
		} else{
			printf("NO\n");
		}
	}
}
