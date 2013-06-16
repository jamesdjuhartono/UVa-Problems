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
	while(scanf("%d", &n) != EOF){
		int start[n];
		int end[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &start[i]);
		}

		for(int i = 0; i < n; i++){
			scanf("%d", &end[i]);
		}

		int count = 0;

		for(int i = 0; i < n; i++){
			int pos = 0;
			for(int j = 0; j < n; j++){
				if(start[j] == end[i]){
					pos = j;
				}
			}

			for(int j = pos; j > i; j--){
				swap(start[j], start[j-1]);
			}

			count += max(0, pos-i);
		}

		printf("%d\n", count);
	}
}