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
	int n;
	while(scanf("%d", &n) != EOF && n != 0){
		double sum = 0.0;
		double arr[n];
		for(int i = 0; i < n; i++){
			double d;
			scanf("%lf", &d);
			arr[i] = d;
			sum += d;
		}
		double avg = (double)(long) ((sum / (double)n) * 100.0 + 0.5) / 100.0;

		double posdiff = 0, negdiff = 0;
		for(int i = 0; i < n; i++){
			double diff = arr[i] - avg;
			if(diff > 0) posdiff += diff;
			else negdiff += diff;
		}
		if(-negdiff < posdiff) printf("$%.2lf\n", -negdiff);
		else printf("$%.2lf\n", posdiff);
	}
}
