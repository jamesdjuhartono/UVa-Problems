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

#define SIZE 50000

bool isPrime[SIZE+1];
int phi[SIZE+1];
int sum[SIZE+1];

void sieve(){
	memset(isPrime, true, sizeof isPrime);
	for(int i = 0; i <= SIZE; i++){
		phi[i] = i;
	}
	phi[1] = 0;
	for(int i = 2; i <= SIZE/2; i++){
		if(isPrime[i]){
			for(int j = i+i; j <= SIZE; j+=i){
				isPrime[j] = false;
				phi[j] = (phi[j] / i) * (i - 1);
			}
		}
	}

	for(int i = 2; i <= SIZE; i++){
		if(isPrime[i]){
			phi[i] -= 1;
		}
	}

	sum[0] = 0;
	for(int i = 1; i <= SIZE; i++){
		sum[i] = sum[i-1] + phi[i];
	}
}

int main(){
	sieve();
	int n;
	while(scanf("%d", &n) != EOF && n != 0){
		printf("%d\n", 2*sum[n] + 1);
	}
}