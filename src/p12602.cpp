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
		string plate;
		cin >> plate;

		int letterval = 0;
		for(int i = 0; i < 3; i++){
			letterval += (plate[i] - 'A') * pow(26, 2-i);
		}

		int digitval = 0;
		for(int i = 4; i < 8; i++){
			digitval += (plate[i] - '0') * pow(10, 7-i);
		}

		if(abs(digitval - letterval) <= 100){
			printf("nice\n");
		} else{
			printf("not nice\n");
		}
	}
}