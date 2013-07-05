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
		int c, r;
		scanf("%d %d", &c, &r);

		if(c == r){
			printf("Case #%d: 0\n", casenum++);
			continue;
		}

		int num = c - r;
		int lim = sqrt(num);
		set<int> divisor;

		for(int i = 1; i <= lim; i++){
			if(num % i == 0){
				if(i > r){
					divisor.insert(i);
				}

				if(num/i > r){
					divisor.insert(num/i);
				}
			}
		}

		printf("Case #%d:", casenum++);
		for(set<int>::iterator it = divisor.begin(); it != divisor.end(); it++){
			printf(" %d", *it);
		}
		printf("\n");
	}
}