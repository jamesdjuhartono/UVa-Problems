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

double dist(pair<double, double> p1, pair<double, double> p2){
	return pow(p1.first-p2.first, 2.0) + pow(p1.second-p2.second,2.0);
}

int main(){
	int n;
	while(scanf("%d", &n) != EOF && n != 0){

		vector<pair<double, double> > coord;
		for(int i = 0; i < n; i++){
			double a,b;
			scanf("%lf %lf", &a, &b);
			coord.push_back(make_pair(a,b));
		}
		if(n == 1){
			printf("INFINITY\n");
			continue;
		}
		sort(coord.begin(), coord.end());
		double min = dist(coord[0], coord[1]);
		for(int i = 0; i < n; i++){
			for(int j = i+1; j < n && pow(coord[j].first-coord[i].first, 2.0) < min; j++){
				double currdist = dist(coord[i], coord[j]);
				if(currdist < min) min = currdist;
			}
		}
		min = sqrt(min);
		if(min > 10000.0 || fabs(min-10000.0)<0.00001) printf("INFINITY\n");
		else printf("%.4f\n", min);
	}
}
