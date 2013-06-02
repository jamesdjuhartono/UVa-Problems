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

int matrix[5][5];
int path[10];

void backtrack(int curr, int pathlength){
	path[pathlength] = curr;
	if(pathlength == 8){
		for(int i = 0; i < 9; i++){
			printf("%d", path[i]+1);
		}
		printf("\n");
	}

	for(int i = 0; i < 5; i++){
		if(matrix[curr][i]){
			matrix[curr][i] = matrix[i][curr] = 0;
			backtrack(i, pathlength+1);
			matrix[curr][i] = matrix[i][curr] = 1;
		}
	}
}

int main(){
	memset(matrix, 0, sizeof matrix);
	matrix[0][1] = matrix[1][0] = 1;
	matrix[0][2] = matrix[2][0] = 1;
	matrix[0][4] = matrix[4][0] = 1;
	matrix[1][2] = matrix[2][1] = 1;
	matrix[1][4] = matrix[4][1] = 1;
	matrix[2][3] = matrix[3][2] = 1;
	matrix[2][4] = matrix[4][2] = 1;
	matrix[3][4] = matrix[4][3] = 1;
	backtrack(0, 0);
}