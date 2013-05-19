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
	int l, r, c;
	while(scanf("%d %d %d\n", &l, &r, &c) != EOF && (l != 0 || r != 0 || c != 0)){
		char dummy;
		char maze[l][r][c];
		bool visited[l][r][c];
		vi startpos;
		int finlevel, finrow, fincol;

		for(int i = 0; i < l; i++){
			for(int j = 0; j < r; j++){
				for(int k = 0; k < c; k++){
					visited[i][j][k] = false;
					scanf("%c", &maze[i][j][k]);
					if(maze[i][j][k] == 'S'){
						startpos.push_back(i);
						startpos.push_back(j);
						startpos.push_back(k);
						startpos.push_back(0);
					}
					if(maze[i][j][k] == 'E'){
						finlevel = i;
						finrow = j;
						fincol = k;
					}
				}
				scanf("%c", &dummy);
			}
			scanf("%c", &dummy);
		}

		queue<vi > q;
		q.push(startpos);
		int ans = 0;
		bool reached = false;

		while(!q.empty()){
			vi curr = q.front();
			q.pop();
			int currlevel = curr[0];
			int currrow = curr[1];
			int currcol = curr[2];
			int currdepth = curr[3];

			if(currlevel == finlevel && currrow == finrow && currcol == fincol){
				reached = true;
				ans = currdepth;
				break;
			}

			if(!visited[currlevel][currrow][currcol]){
				visited[currlevel][currrow][currcol] = true;

				if(currlevel+1 < l && maze[currlevel+1][currrow][currcol] != '#'){
					vi path;
					path.push_back(currlevel+1);
					path.push_back(currrow);
					path.push_back(currcol);
					path.push_back(currdepth+1);
					q.push(path);
				}
				if(currlevel-1 >= 0 && maze[currlevel-1][currrow][currcol] != '#'){
					vi path;
					path.push_back(currlevel-1);
					path.push_back(currrow);
					path.push_back(currcol);
					path.push_back(currdepth+1);
					q.push(path);
				}
				if(currrow+1 < r && maze[currlevel][currrow+1][currcol] != '#'){
					vi path;
					path.push_back(currlevel);
					path.push_back(currrow+1);
					path.push_back(currcol);
					path.push_back(currdepth+1);
					q.push(path);
				}
				if(currrow-1 >= 0 && maze[currlevel][currrow-1][currcol] != '#'){
					vi path;
					path.push_back(currlevel);
					path.push_back(currrow-1);
					path.push_back(currcol);
					path.push_back(currdepth+1);
					q.push(path);
				}
				if(currcol+1 < c && maze[currlevel][currrow][currcol+1] != '#'){
					vi path;
					path.push_back(currlevel);
					path.push_back(currrow);
					path.push_back(currcol+1);
					path.push_back(currdepth+1);
					q.push(path);
				}
				if(currcol-1 >= 0 && maze[currlevel][currrow][currcol-1] != '#'){
					vi path;
					path.push_back(currlevel);
					path.push_back(currrow);
					path.push_back(currcol-1);
					path.push_back(currdepth+1);
					q.push(path);
				}
			}
		}

		if(reached){
			printf("Escaped in %d minute(s).\n", ans);
		} else{
			printf("Trapped!\n");
		}
	}
}
