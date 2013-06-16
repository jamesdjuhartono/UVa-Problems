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
		int x, y, z, ans;
		scanf("%d %d %d", &x, &y, &z);
		ans = z * (x + (x-y)) / (x+y);
		if(ans <= 0){
			printf("0\n");
		} else{
			printf("%d\n", ans);
		}
	}
}