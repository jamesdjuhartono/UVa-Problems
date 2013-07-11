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
	scanf ("%d", &tc);

	while (tc-- > 0){
		int num;
		scanf ("%d", &num);
		
		int lim = sqrt (num);
		int ctr = 0;
		printf("Case #%d: %d = ", casenum++, num);

		for(int i = 2; i <= lim; i++){
			if(num % i == 0){
				printf("%d * %d", i, num / i);
				ctr++;
				if(ctr == 1){
					printf(" = ");
				} else if(ctr == 2){
					printf("\n");
					break;
				}
			}
		}
	}
}