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
	int carmichael_nums[15] = {561, 1105, 1729, 2465, 2821, 6601, 8911, 10585, 15841, 29341, 41041, 46657, 52633, 62745, 63973};
	int n;
	while(scanf("%d", &n) != EOF && n != 0){
		bool found = false;
		for(int i = 0; i < 15; i++){
			if (n == carmichael_nums[i]){
				found = true;
				break;
			}
		}
		if(found)
			printf("The number %d is a Carmichael number.\n", n);
		else
			printf("%d is normal.\n", n);
	}
}
