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
	char beiju[100010];
	while(scanf("%s", beiju) != EOF){
		list<char> printer;
		list<char>::iterator it = printer.begin();
		int len = strlen(beiju);

		for(int i = 0; i < len; i++){
			if(beiju[i] == '['){
				it = printer.begin();
			} else if(beiju[i] == ']'){
				it = printer.end();
			} else{
				printer.insert(it, beiju[i]);
			}
		}

		for(it = printer.begin(); it != printer.end(); it++){
			printf("%c", *it);
		}
		printf("\n");
	}
}