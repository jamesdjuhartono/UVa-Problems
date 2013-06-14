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
	int maxlen = 0;
	char ans[101];
	char curr[101];
	while(scanf("%s", curr) != EOF && strcmp(curr,"E-N-D") != 0){
		int count = 0;
		for(size_t i = 0; i < strlen(curr); i++){
			char ch = curr[i];

			if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || ch == '-'){
				count++;
			}
		}
		if(count > maxlen){
			maxlen = count;
			strcpy(ans, curr);
		}
	}
	
	for(size_t i = 0; i < strlen(ans); i++){
		char ch = tolower(ans[i]);
		if((ch >= 'a' && ch <= 'z') || ch == '-'){
			printf("%c", ch);
		}
	}
	printf("\n");
}