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
	int n;
	int f[31], g[31];
	f[0] = 1; f[1] = 0;
	g[0] = 0; g[1] = 1;

	for(int i = 2; i < 31; i++){
		f[i] = f[i-2] + 2*g[i-1];
		g[i] = f[i-1] + g[i-2];
	}
	while(scanf("%d", &n) != EOF && n != -1){
		printf("%d\n", f[n]);
	}
}