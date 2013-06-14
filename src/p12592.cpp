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
	map<string, string> slogan;
	int n, q;
	scanf("%d\n", &n);

	for(int i = 0; i < n; i++){
		string a, b;
		getline(cin, a);
		getline(cin, b);
		slogan[a] = b;
	}

	scanf("%d\n", &q);

	for(int i = 0; i < q; i++){
		string query;
		getline(cin, query);
		cout << slogan[query] << endl;
	}
}