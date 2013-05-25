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
	int month, record;
	double payment, loan;

	while(scanf("%d %lf %lf %d", &month, &payment, &loan, &record) != EOF && month > 0){
		double dep[month+1];
		memset(dep,0.0,sizeof dep);

		for(int i = 0; i < record; i++){
			int m; double perc;
			scanf("%d %lf", &m, &perc);
			dep[m] = perc;
		}
		for(int i = 1; i < month+1; i++){
			if(dep[i] == 0) dep[i] = dep[i-1];
		}

		double loandiff = loan / month;
		double value = (1.0-dep[0])*(payment + loan);
		int counter = 0;

		while(loan > value){
			counter++;
			loan -= loandiff;
			value = (1-dep[counter])*value;
		}
	
		if(counter == 1){
			printf("1 month\n");
		} else {
			printf("%d months\n", counter);
		}
	}
}