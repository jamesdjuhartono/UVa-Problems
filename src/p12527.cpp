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

bool hasDuplicates(int n){
	int used[10];
	memset(used, 0, sizeof used);
	while(n != 0){
		if(used[n%10]){
			return true;
		}
		used[n%10] = 1;
		n /= 10;
	}
	return false;
}

int main(){
	bool houses[5001];
	memset(houses, true, sizeof houses);
	houses[0] = false;
	for(int i = 11; i < 5001; i++){
		if(hasDuplicates(i)){
			houses[i] = false;
		}
	}

	int n, m;
	while(scanf("%d %d", &n, &m) != EOF){
		int count = 0;
		for(int i = n; i <= m; i++){
			if(houses[i]){
				count++;
			}
		}
		printf("%d\n", count);
	}
}