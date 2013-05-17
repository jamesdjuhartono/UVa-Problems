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

struct shoemaker
{
	double ratio;
	int index;
	shoemaker(double r, int i) : ratio(r), index(i) {}
};

bool operator<(const shoemaker& a, const shoemaker& b){
	return a.ratio > b.ratio;
}

int main(){
	int tc;
	scanf("%d", &tc);
	while(tc-- > 0){
		int n;
		vector<shoemaker> vec;
		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			int t, f;
			scanf("%d %d", &t, &f);
			double ratio = (double)f / (double)t;

			vec.push_back(shoemaker(ratio, i+1));
		}

		sort(vec.begin(), vec.end());
		for(int i = 0; i < n; i++){
			printf("%d", vec[i].index);
			if(i != n-1){
				printf(" ");
			}
		}
		printf("\n");
		if(tc != 0){
			printf("\n");
		}
	}
}
