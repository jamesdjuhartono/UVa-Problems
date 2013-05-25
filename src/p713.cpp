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

int reversenum(int num){
	vi digits;
	int rev = 0;
	while(num > 0){
		int digit = num % 10;
		digits.push_back(digit);
		num /= 10;
	}
	reverse(digits.begin(), digits.end());

	for(int i = 0; i < digits.size(); i++){
		rev += digits[i] * pow(10, i);
	}

	return rev;
}

//Question asked for bigint. Use java version..
int main(){
	int tc;
	scanf("%d", &tc);
	while(tc-- > 0){
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", reversenum(reversenum(a) + reversenum(b)));
	}
}
