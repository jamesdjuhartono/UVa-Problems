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

int bfs(ii start, ii end){
	queue<pair<ii,int> > q;
	q.push(make_pair(start,0));

	while(!q.empty()){
		pair<ii,int> curr = q.front();
		q.pop();

		if(curr.first.first == end.first && curr.first.second == end.second){
			return curr.second;
		} else{
			int x1 = curr.first.first + 1;
			int y1 = curr.first.second + 2;

			int x2 = curr.first.first - 1;
			int y2 = curr.first.second + 2;

			int x3 = curr.first.first + 1;
			int y3 = curr.first.second - 2;

			int x4 = curr.first.first - 1;
			int y4 = curr.first.second - 2;

			int x5 = curr.first.first + 2;
			int y5 = curr.first.second + 1;

			int x6 = curr.first.first - 2;
			int y6 = curr.first.second + 1;

			int x7 = curr.first.first + 2;
			int y7 = curr.first.second - 1;

			int x8 = curr.first.first - 2;
			int y8 = curr.first.second - 1;

			if(x1 >= 0 && x1 < 8 && y1 >= 0 && y1 < 8) q.push(make_pair(make_pair(x1,y1), curr.second+1));
			if(x2 >= 0 && x2 < 8 && y2 >= 0 && y2 < 8) q.push(make_pair(make_pair(x2,y2), curr.second+1));
			if(x3 >= 0 && x3 < 8 && y3 >= 0 && y3 < 8) q.push(make_pair(make_pair(x3,y3), curr.second+1));
			if(x4 >= 0 && x4 < 8 && y4 >= 0 && y4 < 8) q.push(make_pair(make_pair(x4,y4), curr.second+1));
			if(x5 >= 0 && x5 < 8 && y5 >= 0 && y5 < 8) q.push(make_pair(make_pair(x5,y5), curr.second+1));
			if(x6 >= 0 && x6 < 8 && y6 >= 0 && y6 < 8) q.push(make_pair(make_pair(x6,y6), curr.second+1));
			if(x7 >= 0 && x7 < 8 && y7 >= 0 && y7 < 8) q.push(make_pair(make_pair(x7,y7), curr.second+1));
			if(x8 >= 0 && x8 < 8 && y8 >= 0 && y8 < 8) q.push(make_pair(make_pair(x8,y8), curr.second+1));
		}
	}
}

int main(){
	string line;
	while(getline(cin, line)){
		istringstream iss(line);
		string start, end;
		iss >> start;
		iss >> end;

		int sx = start[0] - 'a';
		int sy = start[1] - '1';
		int ex = end[0] - 'a';
		int ey = end[1] - '1';
		ii sp = make_pair(sx, sy);
		ii ep = make_pair(ex, ey);
		cout << "To get from " << start << " to " << end << " takes " << bfs(sp, ep) << " knight moves." << endl;
	}
}
