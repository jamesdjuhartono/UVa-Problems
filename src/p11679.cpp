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
	int b, n;
	while(scanf("%d %d", &b, &n) != EOF && (b!=0 || n!= 0)){
		int reserve[b+1];
		for(int i = 1; i <= b; i++){
			scanf("%d", &reserve[i]);
		}
		for(int i = 0; i < n; i++){
			int d, c, v;
			scanf("%d %d %d", &d, &c, &v);
			reserve[d] -= v;
			reserve[c] += v;
		}
		int bailout = false;
		for(int i = 1; i <= b; i++){
			if(reserve[i] < 0){
				bailout = true;
				break;
			}
		}
		if(bailout) printf("N\n");
		else printf("S\n");
	}
}
