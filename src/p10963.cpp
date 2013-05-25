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
		int n;
		int diff;
		bool closed = true;
		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			int a, b;
			scanf("%d %d", &a, &b);
			if(i == 0) diff = abs(a-b);
			else if (diff != abs(a-b)) closed = false;
		}
		if(!closed) printf("no\n");
		else printf("yes\n");
		if(tc != 0) printf("\n");
	}
}
