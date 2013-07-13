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
		int books[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &books[i]);
		}
		int m;
		scanf("%d", &m);

		int mindiff = INF;
		int p1 = INF, p2 = INF;
		for(int i = 0; i < n; i++){
			for(int j = i+1; j < n; j++){
				if(books[i] + books[j] == m && abs(books[i] - books[j]) < mindiff){
					p1 = books[i];
					p2 = books[j];
					mindiff = abs(p1 - p2);
				}
			}
		}

		printf("Peter should buy books whose prices are %d and %d.\n\n", min(p1,p2), max(p1,p2));
	}
}