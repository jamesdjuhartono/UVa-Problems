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
#define pi 3.141592653589793

int main(){
	double x1, x2, x3, y1, y2, y3;
	while(scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3) != EOF){
		//Circumscribed circle area theorem: area of triangle = (a*b*c)/(4*radius)
		double s1 = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
		double s2 = sqrt(pow(x1-x3, 2) + pow(y1-y3, 2));
		double s3 = sqrt(pow(x2-x3, 2) + pow(y2-y3, 2));

		double s = (s1 + s2 + s3) / 2;
		double triangle_area = sqrt(s * (s-s1) * (s-s2) * (s-s3));
		double radius = s1*s2*s3 / (4*triangle_area);
		printf("%.2lf\n", 2*pi*radius);
	}
}