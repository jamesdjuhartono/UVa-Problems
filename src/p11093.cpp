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
	int tc, casenum = 1;
	scanf("%d", &tc);

	while(tc-- > 0){
		int n;
		scanf("%d", &n);

		int p[n], q[n], sum[n], totalp = 0, totalq= 0;
		for(int i = 0; i < n; i++){
			scanf("%d", &p[i]);
			totalp += p[i];
		}

		for(int i = 0; i < n; i++){
			scanf("%d", &q[i]);
			totalq += q[i];
		}

		if(totalq > totalp){
			printf("Case %d: Not possible\n", casenum++);
			continue;
		}

		for(int i = 0; i < n; i++){
			sum[i] = p[i] - q[i];
		}

		int start = 0;
		int curr = start;
		int s = 0;
		int step = 0;
		bool found = false;
		int trial = 0;

		while(trial < n){
			s += sum[curr];
			curr++;

			if(s < 0){
				step = 0;
				s = 0;
				start = curr;
				trial++;
			}
			else step++;

			if(curr == n) curr = 0;
			if(step == n){
				found = true;
				break;
			}
		}

		if(found){
			printf("Case %d: Possible from station %d\n", casenum++, start+1);
		}
	}
}