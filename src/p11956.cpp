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
	scanf("%d\n", &tc);
	char inp[100100];

	while(tc-- > 0){
		scanf("%[.-+><]\n", inp);
		unsigned char led[100];
		for(int i = 0; i < 100; i++) led[i] = 0;
		int idx = 0;
		for(char *c = inp; *c; ++c){
			if(*c == '+') led[idx]++;
			else if(*c == '-') led[idx]--;
			else if(*c == '>') idx++;
			else if(*c == '<') idx--;

			if(idx == -1) idx = 99;
			else if(idx == 100) idx = 0;
		}

		printf("Case %d:", casenum++);
		for(int i = 0; i < 100; i++){
			printf(" %02X", led[i]);
		}
		printf("\n");
	}
}
