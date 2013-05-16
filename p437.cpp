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

struct block {
    int x,y,z;
	block(int xx, int yy, int zz) : x(xx), y(yy), z(zz) {}
};

bool operator<(const block& a,const block& b)
{
    if(a.x != b.x) return (a.x > b.x);
    else if(a.y != b.y) return (a.y > b.y);
    else return (a.z > b.z);
}


int main(){
	int casenum = 1;
	int n;

	while (scanf("%d", &n) != EOF && n != 0){
		vector<block> arr;
		int x, y , z;
		for(int i = 0; i < n; i++){
			scanf("%d %d %d", &x, &y, &z);
			arr.push_back(block(x,y,z));
			arr.push_back(block(x,z,y));
			arr.push_back(block(y,x,z));
			arr.push_back(block(y,z,x));
			arr.push_back(block(z,x,y));
			arr.push_back(block(z,y,x));
		}

		sort(arr.begin(), arr.end());

		int dp[6*n];
		int maxh = 0;
		for(int i = 0; i < 6*n; i++){
			dp[i] = arr[i].z;
			for(int k = 0; k < i; k++){
				if(arr[k].x > arr[i].x && arr[k].y > arr[i].y){
					dp[i] = max(dp[i], dp[k] + arr[i].z);
				}
			}
			maxh = max(maxh, dp[i]);
		}
		printf("Case %d: maximum height = %d\n", casenum++, maxh);
	}
}
