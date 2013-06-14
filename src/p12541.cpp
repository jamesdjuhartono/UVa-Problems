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
	scanf("%d", &n);

	string minname, maxname;
	int mindate, minmonth, minyear;
	int maxdate, maxmonth, maxyear;

	mindate = minmonth = minyear = 0;
	maxdate = maxmonth = maxyear = INF;

	for(int i = 0; i < n; i++){
		string name;
		int date, month, year;
		cin >> name >> date >> month >> year;

		if(year > minyear){
			minyear = year;
			minmonth = month;
			mindate = date;
			minname = name;
		} else if(year == minyear && month > minmonth){
			minmonth = month;
			mindate = date;
			minname = name;
		} else if(year == minyear && month == minmonth && date > mindate){
			mindate = date;
			minname = name;
		}

		if(year < maxyear){
			maxyear = year;
			maxmonth = month;
			maxdate = date;
			maxname = name;
		} else if(year == maxyear && month < maxmonth){
			maxmonth = month;
			maxdate = date;
			maxname = name;
		} else if(year == maxyear && month == maxmonth && date < maxdate){
			maxdate = date;
			maxname = name;
		}
	}
	cout << minname << endl << maxname << endl;
}