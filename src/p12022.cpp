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
	int oeis_a670[11] = {1, 3, 13, 75, 541, 4683, 47293, 545835, 7087261, 102247563, 1622632573};
	int tc;
	scanf("%d", &tc);

	while(tc-- > 0){
		int n;
		scanf("%d", &n);
		printf("%d\n", oeis_a670[n-1]);
	}
}