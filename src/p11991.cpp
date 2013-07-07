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
	int n, m;
	while(scanf("%d %d", &n, &m) != EOF){
		vector<vi> vec;
		vec.assign(1000001, vi());

		for(int i = 0; i < n; i++){
			int num;
			scanf("%d", &num);
			vec[num].push_back(i+1);
		}

		for(int i = 0; i < m; i++){
			int k, v;
			scanf("%d %d", &k, &v);
			if(vec[v].size() < k){
				printf("0\n");
			} else{
				printf("%d\n", vec[v][k-1]);
			}
		}
	}
}