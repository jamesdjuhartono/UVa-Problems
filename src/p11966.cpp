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

int P[1000];
double x[1000], y[1000];

int findset(int v) {
    if (P[v] == v) return v;
    return P[v] = findset(P[v]);
}

bool unionset(int x, int y) {
    int a = findset(x), b = findset(y);
    if (a == b) return false;
    P[b] = a;
    return true;
}

int main(){
	int tc, casenum = 1;
	scanf("%d", &tc);

	while(tc-- > 0){
		int n;
		double d;

		scanf("%d %lf", &n, &d);

		for(int i = 0; i < n; i++){
			P[i] = i;
		}

		int sets = n;

		for(int i = 0; i < n; i++){
			scanf("%lf %lf", &x[i], &y[i]);
			for(int j = 0; j < i; j++){
				double dist = sqrt(pow(x[j] - x[i], 2) + pow(y[j] - y[i], 2));
				if(dist <= d && unionset(i, j)){
					sets--;
				}
			}
		}
		printf("Case %d: %d\n", casenum++, sets);
	}
}