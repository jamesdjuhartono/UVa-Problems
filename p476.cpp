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

struct rectangle
{
	double x1, y1, x2, y2;
	rectangle(double xx1, double yy1, double xx2, double yy2) : x1(xx1), y1(yy1), x2(xx2), y2(yy2) {}
	bool contains(double x, double y){
		if(x > x1 && x < x2 && y < y1 && y > y2) return true;
		else return false;
	}
};

int main(){
	char dummy[10];
	vector<rectangle> vec;

	while(scanf("%s" , dummy) && dummy[0] == 'r'){
		double x1, y1, x2, y2;
		scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
		vec.push_back(rectangle(x1,y1,x2,y2));
	}

	double x, y;
	int counter = 1;
	while(scanf("%lf %lf", &x, &y) != EOF && x != 9999.9 && y != 9999.9){
		bool exist = false;
		for(int i = 0; i < vec.size(); i++){
			rectangle curr = vec[i];
			if(curr.contains(x, y)){
				exist = true;
				cout << "Point " << counter << " is contained in figure " << (i+1) << endl;
			}
		}
		if(!exist){
			cout << "Point " << counter << " is not contained in any figure" << endl;
		}
		counter++;
	}
}
