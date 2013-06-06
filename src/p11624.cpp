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

int row, col;
char grid[1001][1001];
vii fire;
ii joe;


int escape(){
	int firemins[row][col];
	int joemins[row][col];

	int rowmove[] = {1, 0, -1, 0};
	int colmove[] = {0, 1, 0, -1};

	for(int i = 0 ; i < row; i++){
		for(int j = 0; j < col; j++){
			firemins[i][j] = -1;
			joemins[i][j] = -1;
		}
	}

	queue<ii> q;
	for(size_t i = 0; i < fire.size(); i++){
		q.push(fire[i]);
		firemins[fire[i].first][fire[i].second] = 0;
	}

	while(!q.empty()){
		ii curr = q.front();
		q.pop();
		int currrow = curr.first;
		int currcol = curr.second;

		for(int i = 0; i < 4; i++){
			int nextrow = currrow + rowmove[i];
			int nextcol = currcol + colmove[i];

			if(nextrow >= 0 && nextrow < row && nextcol >= 0 && nextcol < col && // has to be inside the grid
				(grid[nextrow][nextcol] == '.' || grid[nextrow][nextcol] == 'J') && // fire can reach either empty cell or Joe
				(firemins[nextrow][nextcol] == -1 || firemins[currrow][currcol] + 1 < firemins[nextrow][nextcol])){ // reached the fastest
				firemins[nextrow][nextcol] = firemins[currrow][currcol] + 1;
				q.push(ii(nextrow, nextcol));
			}
		}
	}

	joemins[joe.first][joe.second] = 0;
	q.push(joe);
	while(!q.empty()){
		ii curr = q.front();
		q.pop();
		int currrow = curr.first;
		int currcol = curr.second;

		if(currrow == 0 || currrow == row-1 || currcol == 0 || currcol == col-1){
			return joemins[currrow][currcol] + 1;
		}

		for(int i = 0; i < 4; i++){
			int nextrow = currrow + rowmove[i];
			int nextcol = currcol + colmove[i];

			if(grid[nextrow][nextcol] == '.' && joemins[nextrow][nextcol] == -1 &&
				(firemins[nextrow][nextcol] == -1 || joemins[currrow][currcol] + 1 < firemins[nextrow][nextcol])){
				joemins[nextrow][nextcol] = joemins[currrow][currcol] + 1;
				q.push(ii(nextrow,nextcol));
			}
		}
	}
	return -1;
}

int main(){
	int tc;
	scanf("%d\n", &tc);
	while(tc-- > 0){
		fire.clear();

		scanf("%d %d\n", &row, &col);
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
				scanf("%c", &grid[i][j]);
				if(grid[i][j] == 'F'){
					fire.push_back(ii(i,j));
				}
				if(grid[i][j] == 'J'){
					joe = ii(i,j);
				}
			}
			scanf("\n");
		}

		int ans = escape();
		if(ans == -1){
			printf("IMPOSSIBLE\n");
		} else{
			printf("%d\n", ans);
		}
	}
}