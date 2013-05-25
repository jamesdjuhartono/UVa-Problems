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

		int road[n-1];
		for(int i = 0; i < n-1; i++){
			scanf("%d", &road[i]);
		}

		int sum[n-1]; sum[0] = road[0];
		for(int i = 1; i < n-1; i++){
			sum[i] = sum[i-1] + road[i];
		}

		int besti, bestj, max = 0;
		int i = 0;
		for(int j = 0; j < n-1; j++){
			if(sum[j] - sum[i] + road[i] > max){
				max = sum[j] - sum[i] + road[i];
				besti = i;
				bestj = j;
			} else if(sum[j] - sum[i] + road[i] == max && j-i > bestj-besti){
				besti = i;
				bestj = j;
			} else if(sum[j] - sum[i] + road[i] < 0){
				i = j+1;
			}
		}

		if(max > 0){
			printf("The nicest part of route %d is between stops %d and %d\n", casenum++, besti+1, bestj+2);
		} else{
			printf("Route %d has no nice parts\n", casenum++);
		}
	}
}
