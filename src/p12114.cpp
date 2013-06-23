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
	int b, s, casenum = 1;
	while(scanf("%d %d", &b, &s) != EOF && (b != 0 || s != 0)){
		if(b == 1){
			printf("Case %d: :-\\\n", casenum++);
			continue;
		}
		double prob1 = min(1.0, (double)s/(double)b);
		double prob2 = min(1.0, (double)(s-1)/(double)(b-1));
		if(prob1 == prob2){
			printf("Case %d: :-|\n", casenum++);
		} else{
			printf("Case %d: :-(\n", casenum++);
		}
	}
}