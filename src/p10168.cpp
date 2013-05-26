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

bool prime[10000001];

void fill_prime()
{
    for(int i = 0; i < 10000001; i++)
        prime[i] = true;

    prime[0] = false;   prime[1] = false;
	for(int i = 4; i < 10000001; i += 2)
		prime[i] = false;

	for(int i = 3; i * i < 10000001; i += 2){
		if(prime[i]){
			for(int j = i * i; j < 10000001; j += 2*i)
                prime[j] = false;
        }
    }
}

int main(){
	int n;
	fill_prime();

	while(scanf("%d", &n) != EOF){
		if(n < 8) printf("Impossible.\n");

		else if(n % 2 == 1){
			printf("2 3 ");
			n -= 5;
			if(prime[n-2]){
				printf("2 %d\n", n-2);
				continue;
			} 
			for(int i = 3; i < n; i+=2){
				if(prime[i] && prime[n-i]){
					printf("%d %d\n", i, n-i);
					break;
				} 
			}
		} else{
			printf("2 2 ");
			n -= 4;
			if(prime[n-2]){
				printf("2 %d\n", n-2);
				continue;
			} 
			for(int i = 3; i < n; i+=2){
				if(prime[i] && prime[n-i]){
					printf("%d %d\n", i, n-i);
					break;
				} 
			}
		}
	}
}
