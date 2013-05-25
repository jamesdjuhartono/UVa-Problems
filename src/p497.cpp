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
	string inp;
	scanf("%d", &tc);
	getline(cin, inp);
	getline(cin, inp);
	
	
	while(tc-- > 0){
		vi vec;
		while(getline(cin, inp, '\n')){
			if(inp.length() == 0) break;
			stringstream iss(inp);
			int val;
			iss >> val;
			vec.push_back(val);
		}

		int dp[vec.size()];
		int p[vec.size()];
		int maxlen = 0, maxidx = 0;

		for(int i = 0; i < vec.size(); i++){
			dp[i] = 1;
			p[i] = -1;
			for(int k = 0; k < i; k++){
				if(vec[i] > vec[k] && dp[i] < dp[k]+1){
					dp[i] = dp[k] + 1;
					p[i] = k;
				}
			}
			if(dp[i] > maxlen){
				maxlen = dp[i];
				maxidx = i;
			}
		}

		printf("Max hits: %d\n", maxlen);
		stack<int> s;
		while(maxidx != -1){
			s.push(vec[maxidx]);
			maxidx = p[maxidx];
		}
		while(!s.empty()){
			printf("%d\n", s.top());
			s.pop();
		}
		if(tc != 0){
			printf("\n");
		}
	}
}
