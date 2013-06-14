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

bool prime[100001];

void sieve(){
	memset(prime, true, sizeof prime);
	prime[0] = prime[1] = false;
	for(int i = 4; i < 100001; i+=2){
		prime[i] = false;
	}
	for(int i = 3; i <= sqrt(100001); i++){
		if(prime[i]){
			for(int j = i+i; j < 100001; j+=i){
				prime[j] = false;
			}
		}
	}
}


int main(){
	string inp;
	sieve();
	while(cin >> inp && inp != "0"){
		int maxval = 0;

		for(size_t i = 0; i < inp.length(); i++){
			for(int j = 1; j <= 5; j++){
				istringstream iss(inp.substr(i,j));
				int k;
				iss >> k;
				if(prime[k] && k > maxval){
					maxval = k;
				}
			}
		}

		printf("%d\n", maxval);
	}
}