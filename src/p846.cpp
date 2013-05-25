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
	while(tc-- > 0){
		int start, end;
		scanf("%d %d", &start, &end);
		int diff = end-start;

		if(diff == 0){
			printf("0\n");
		} else{
			printf("%d\n", (int)min(ceil(sqrt(4*diff + 1))-1, 2*ceil(sqrt(diff)) - 1));
		}
	}
}
