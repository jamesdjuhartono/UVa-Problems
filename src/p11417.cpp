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

int gcd(int a, int b){
	int c;
	while(a != 0){
		c = b%a;
		b = a;
		a = c;
	}
	return b;
}

int main(){
	int n;
	while(scanf("%d", &n) != EOF && n > 0){
		int g = 0;
		for(int i = 1; i < n; i++){
			for(int j = i+1; j <= n; j++){
				g += gcd(i,j);
			}
		}
		printf("%d\n", g);
	}
}