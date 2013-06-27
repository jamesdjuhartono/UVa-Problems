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
		printf("Case %d: ", casenum++);
		int n;
		scanf("%d", &n);
		map<string, int> m;
		for(int i = 0; i < n; i++){
			string subject;
			int days;
			cin >> subject >> days;
			m[subject] = days;
		}

		int d;
		string sub;
		cin >> d >> sub;
		if(m.count(sub) == 0 || m[sub] > d+5){
			printf("Do your own homework!\n");
		} else if(m[sub] <= d){
			printf("Yesss\n");
		} else if(m[sub] <= d+5){
			printf("Late\n");
		}
	}
}