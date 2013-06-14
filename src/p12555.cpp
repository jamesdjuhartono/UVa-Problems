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
		string inp;
		cin >> inp;
		int a, b;

		if(inp.length() == 9){ // 2 digits for a, 1 digit b
			a = (inp[0] - '0') * 10 + (inp[1] - '0');
			b = (inp[5] - '0');
		} else if(inp.length() == 8){ // 1 digit a, 1 digit b
			a = inp[0] - '0';
			b = inp[4] - '0';
		} else if(inp.length() == 5){ // 2 digit a, 0 digit b
			a = (inp[0] - '0') * 10 + (inp[1] - '0');
			b = 0;
		} else if(inp.length() == 4){ // 1 digit a, 0 digit b
			a = inp[0] - '0';
			b = 0;
		}

		cout << "Case " << casenum++ << ": " << (0.5*a) + (0.05*b) << endl;
	}
}