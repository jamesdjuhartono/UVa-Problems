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

int rungs[10000 + 10];

int main(){
	int tc, casenum = 1;
	scanf("%d", &tc);

	while(tc-- > 0){
		int n;
		scanf("%d", &n);

		rungs[0] = 0;

		int maxdiff = 0;
		for(int i = 1; i <= n; i++){
			scanf("%d", &rungs[i]);
			int diff = rungs[i] - rungs[i-1];
			if(diff > maxdiff){
				maxdiff = diff;
			}
		}

		int ans = maxdiff;

		for(int i = 1; i <= n; i++){
			int diff = rungs[i] - rungs[i-1];
			if(diff == maxdiff){
				maxdiff--;
			} else if(diff > maxdiff){
				ans++;
				break;
			}
		}

		printf("Case %d: %d\n", casenum++, ans);
	}
}