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

vector<vector<ll> > matrix_mul(vector<vector<ll> > m1, vector<vector<ll> > m2, int m){
	vector<vector<ll> > temp(2, vector<ll>(2));
	temp[0][0] = ((m1[0][0] % m * m2[0][0] % m) % m + (m1[0][1] % m * m2[1][0] % m) % m) % m;
	temp[0][1] = ((m1[0][0] % m * m2[0][1] % m) % m + (m1[0][1] % m * m2[1][1] % m) % m) % m;
	temp[1][0] = ((m1[1][0] % m * m2[0][0] % m) % m + (m1[1][1] % m * m2[1][0] % m) % m) % m;
	temp[1][1] = ((m1[1][0] % m * m2[0][1] % m) % m + (m1[1][1] % m * m2[1][1] % m) % m) % m;
	//printf("%lld %lld %lld %lld\n", temp[0][0], temp[0][1], temp[1][0], temp[1][1]);
	return temp;
}

vector<vector<ll> > matrix_pow(vector<vector<ll> > matrix, int n, int m){
	if(n == 1) return matrix;
	else if (n == 2){
		return matrix_mul(matrix, matrix, m);
	} else if(n%2 == 0){
		vector<vector<ll> > temp = matrix_pow(matrix,n/2, m);
		return matrix_mul(temp, temp, m);
	} else{
		vector<vector<ll> > temp = matrix_pow(matrix, (n-1)/2, m);
		return matrix_mul(matrix_mul(temp, temp, m), matrix, m);
	}
}

int fibo(int n, int m){
	if(n == 0) return 0;
	else if(n == 1) return 1;
	else if(n == 2) return 1;
	else if(n == 3) return 2;
	vector<vector<ll> > fibo_matrix (2, vector<ll>(2));
	fibo_matrix[0][0] = 0;
	fibo_matrix[0][1] = 1;
	fibo_matrix[1][0] = 1;
	fibo_matrix[1][1] = 1;
	fibo_matrix = matrix_pow(fibo_matrix, n, m);
	return fibo_matrix[0][1];
}

int main(){
	//map<pair<ll, int>, int> memo;
	ll n; 
	int m;

	while(scanf("%lld %d", &n, &m) != EOF){
		printf("%d\n", fibo(n, pow(2,m)));
		// pair<ll, int> curr = make_pair(n,m);
		// if(memo.count(curr) != 0){
		// 	printf("%d\n", memo[curr]);
		// } else{
		// 	memo[curr] = fibo(n, pow(2,m));
		// 	printf("%d\n", memo[curr]);
		// }
	}
}
