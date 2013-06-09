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
	ll n;
	while(scanf("%lld", &n) != EOF && n != 0){
		ll x = n + n/9;
		if(n % 9 == 0){
			printf("%lld %lld", x-1, x);
		} else{
			printf("%lld", x);
		}
		printf("\n");
	}
}