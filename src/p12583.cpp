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
	scanf("%d", &tc);

	while(tc-- > 0){
		int n, k;
		scanf("%d %d", &n, &k);
		string names;
		cin >> names;

		int counter = 0;

		for(int i = 0; i < n; i++){
			char curr = names[i];
			for(int j = max(0, i-k); j < i; j++){
				if(names[j] == curr){
					counter++;
					break;
				}
			}
		}

		printf("Case %d: %d\n", casenum++, counter);

	}
}