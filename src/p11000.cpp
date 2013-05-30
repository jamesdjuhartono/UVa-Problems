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
	vector<ll> m, f;
	m.push_back(0);
	m.push_back(1);
	f.push_back(1);
	f.push_back(1);

	while(scanf("%d", &n) != EOF && n != -1){
		if(n >= m.size()){
			for(int i = m.size(); i <= n; i++){
				m.push_back(m[i-1] + m[i-2] + 1);
				f.push_back(m[i-1] + 1);
			}
		}
		printf("%lld %lld\n", m[n], m[n] + f[n]);
	}
}
