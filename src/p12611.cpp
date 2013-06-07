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
		int r;
		scanf("%d", &r);
		int width = 5*r;
		int height = 6 * width / 10;

		printf("Case %d:\n", casenum++);
		int ytop = 0.5 * height;
		int ybot = -0.5 * height;
		int xleft = -0.45 * width;
		int xright = 0.55 * width;

		printf("%d %d\n", xleft, ytop);
		printf("%d %d\n", xright, ytop);
		printf("%d %d\n", xright, ybot);
		printf("%d %d\n", xleft, ybot);
	}
}