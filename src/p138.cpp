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
	int n[10], x[10];
	n[0] = 6; n[1] = 35;
	x[0] = 8; x[1] = 49;

	for(int i = 2; i < 10; i++){
		n[i] = 6*n[i-1] - n[i-2];
		x[i] = n[i] + n[i-1] + x[i-1];
	}

	for(int i = 0; i < 10; i++) printf("%10d%10d\n", n[i], x[i]);
}
