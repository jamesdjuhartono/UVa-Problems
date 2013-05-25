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
	int tc;
	scanf("%d", &tc);
	while(tc-- > 0){
		int n, curr = 0;
		scanf("%d", &n);
		int arr[n];
		string cmd;
		for(int i = 0; i < n; i++){
			int target;
			cin >> cmd;
			if(cmd == "SAME"){
				cin >> cmd;
				scanf("%d", &target);
				curr += arr[target-1];
				arr[i] = arr[target-1];
			} else if (cmd == "LEFT"){
				curr--;
				arr[i] = -1;
			} else{
				curr++;
				arr[i] = 1;
			}
		}
		printf("%d\n", curr);
	}
}
