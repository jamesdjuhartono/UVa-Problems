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
	int a, b;
	while(scanf("%d %d", &a, &b) != EOF){
		bool first = true;
		printf("[");
		while(true){
			printf("%d", a/b);
			int res = a % b;
			a = b;
			b = res;

			if(a == 1 || b == 0){
				printf("]\n");
				break;
			}
			if (first){ 
				printf(";");
				first = false;
			}
			else printf(",");
		}
	}
}
