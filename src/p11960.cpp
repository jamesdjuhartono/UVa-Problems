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

#define SIZE 1000001
vi primes;

void sieve(){
	bool mark[SIZE];
	memset(mark, true, sizeof mark);

	mark[0] = mark[1] = false;
	for(int i = 4; i < SIZE; i += 2){
		mark[i] = false;
	}
	primes.push_back(2);

	int lim = sqrt(SIZE);
	for(int i = 3; i <= lim; i += 2){
		if(mark[i]){
			primes.push_back(i);
			for(int j = i+i; j < SIZE; j += i){
				mark[j] = false;
			}
		}
	}
}

int findDivisor(int n){
	int ans = 1;

	for(size_t i = 0; i < primes.size(); i++){
		int curr = primes[i];
		if(curr > n || n == 0) break;
		int power = 0;

		while(n % curr == 0){
			power++;
			n /= curr;
		}

		ans *= (power + 1);
	}

	return ans;
}

int main(){
	sieve();
	int sol[SIZE];
	sol[1] = 1;

	int maxx = 1, max_num_div = 1;
	for(int i = 2; i < SIZE; i++){
		int n = findDivisor(i);
		if(n >= max_num_div){
			max_num_div = n;
			maxx = i;
		}
		sol[i] = maxx;
	}

	int tc;
	scanf("%d", &tc);

	while(tc-- > 0){
		int n;
		scanf("%d", &n);

		printf("%d\n", sol[n]);
	}
}