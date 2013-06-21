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
	ll fibo[81];
	fibo[1] = 1;
	fibo[2] = 2;
	for(int i = 3; i < 81; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}

	int n;
	while(scanf("%d", &n) != EOF && n != 0){
		printf("%lld\n", fibo[n]);
	}
}