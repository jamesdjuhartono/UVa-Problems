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
		string s;
		cin >> s;
		
		if(s == "1" || s == "4" || s == "78"){
			printf("+\n");
		} else if(s[s.length()-1] == '5' && s[s.length()-2] == '3'){
			printf("-\n");
		} else if(s[0] == '9' && s[s.length()-1] == '4'){
			printf("*\n");
		} else{
			printf("?\n");
		}
	}	
}