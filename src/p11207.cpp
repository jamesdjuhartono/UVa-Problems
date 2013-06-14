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
	while(scanf("%d", &n) != EOF && n != 0){
		
		double maxval = 0;
		int idx = 0;

		for(int i = 0; i < n; i++){
			double a, b;
			scanf("%lf %lf", &a, &b);
			if(a > b){
				swap(a, b);
			}

			double curr = max(min(a, b/4.0), min(a/2.0, b/2.0));
			if(curr > maxval){
				maxval = curr;
				idx = i+1;
			}
		}

		printf("%d\n", idx);
	}
}