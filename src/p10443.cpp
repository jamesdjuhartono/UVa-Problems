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
	scanf("%d\n", &tc);
	while(tc-- > 0){
		int r, c, n;
		scanf("%d %d %d\n", &r, &c, &n);

		char matrix[r][c];
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				scanf("%c", &matrix[i][j]);
			}scanf("\n");
		}

		char tmr[r][c];

		for(int k = 0; k < n; k++){
			for(int i = 0; i < r; i++){
				for(int j = 0; j < c; j++){
					char curr = matrix[i][j];
					if(curr == 'S'){
						if(i+1 < r && matrix[i+1][j] == 'R') tmr[i][j] = 'R';
						else if(i-1 >= 0 && matrix[i-1][j] == 'R') tmr[i][j] = 'R';
						else if(j+1 < c && matrix[i][j+1] == 'R') tmr[i][j] = 'R';
						else if(j-1 >= 0 && matrix[i][j-1] == 'R') tmr[i][j] = 'R';
						else tmr[i][j] = 'S';
					} else if(curr == 'P'){
						if(i+1 < r && matrix[i+1][j] == 'S') tmr[i][j] = 'S';
						else if(i-1 >= 0 && matrix[i-1][j] == 'S') tmr[i][j] = 'S';
						else if(j+1 < c && matrix[i][j+1] == 'S') tmr[i][j] = 'S';
						else if(j-1 >= 0 && matrix[i][j-1] == 'S') tmr[i][j] = 'S';
						else tmr[i][j] = 'P';
					} else{
						if(i+1 < r && matrix[i+1][j] == 'P') tmr[i][j] = 'P';
						else if(i-1 >= 0 && matrix[i-1][j] == 'P') tmr[i][j] = 'P';
						else if(j+1 < c && matrix[i][j+1] == 'P') tmr[i][j] = 'P';
						else if(j-1 >= 0 && matrix[i][j-1] == 'P') tmr[i][j] = 'P';
						else tmr[i][j] = 'R';
					}
				}
			}

			for(int i = 0; i < r; i++){
				for(int j = 0; j < c; j++){
					matrix[i][j] = tmr[i][j];
				}
			}
		}

		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				printf("%c", matrix[i][j]);
			}
			printf("\n");
		}
		if(tc) printf("\n");
	}
}