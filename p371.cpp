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

map<ll, ll> memo;

ll ackerman(ll n){
	if(memo.count(n) != 0) return memo[n];
	if(n % 2 == 0) return memo[n] = ackerman(n/2) + 1;
	else return memo[n] = ackerman(3*n+1) + 1;
}

int main(){
	ll a, b;
	
	while(scanf("%lld %lld", &a, &b) != EOF && (a != 0 || b != 0)){
		ll maxval = 0;
		ll maxidx, low = min(a,b), top = max(a,b);
		for(ll i = low; i <= top; i++){
			ll currlength = ackerman(i);
			if(currlength > maxval){
				maxval = currlength;
				maxidx = i;
			}
		}
		printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",low, top, maxidx, maxval);
	}
}
