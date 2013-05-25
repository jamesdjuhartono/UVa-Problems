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

double prim(vector<pair<double,double> > points){

	bool taken[points.size()];
	memset(taken, false, sizeof taken);
	priority_queue<pair<double, int> > pq;
	pq.push(make_pair(0.0, 0));
	
	
	double cost = 0.0;

	while(!pq.empty()){
		pair<double, int> curr = pq.top();
		pq.pop();
		int curridx = -curr.second;
		double currdist = -curr.first;

		if(!taken[curridx]){
			taken[curridx] = true;
			cost += currdist;
			for(int i = 0; i < points.size(); i++){
				if(i != curridx){
					double xdiff = abs(points[curridx].first - points[i].first);
					double ydiff = abs(points[curridx].second - points[i].second);
					double dist = sqrt(pow(xdiff,2) + pow(ydiff,2));
					pq.push(make_pair(-dist, -i));
				}
			}
		}
	}
	return cost;
}

int main(){
	int tc;
	scanf("%d",&tc);
	while(tc-- > 0){
		int n;
		scanf("%d", &n);
		vector<pair<double, double> > points;
		for(int i = 0; i < n; i++){
			double x, y;
			scanf("%lf %lf", &x, &y);
			points.push_back(make_pair(x,y));
		}
		printf("%.2f\n", prim(points));
		if(tc != 0){
			printf("\n");
		}
	}
}
