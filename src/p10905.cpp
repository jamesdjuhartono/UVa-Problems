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

bool small(string a, string b){
	string sum1 = a+b;
	string sum2 = b+a;

	bool smaller = false, equal = true;
	for(int i = 0; i < sum1.length(); i++){
		int from1 = (int)(sum1.at(i) - '0');
		int from2 = (int)(sum2.at(i) - '0');
		if(from1 < from2){
			smaller = true;
			break;
		}
		if(from1 > from2){
			equal = false;
			break;
		}
	}

	if(smaller) return true;
	else if(equal && a.length() < b.length()) return true;
	else return false;	
}

int main(){
	int n;
	while(scanf("%d", &n) != EOF && n != 0){
		vector<string> vect;
		for(int i = 0; i < n; i++){
			string num;
			cin >> num;
			vect.push_back(num);
		}
		sort(vect.begin(), vect.end(), small);
		for(int i = n-1; i >= 0; i--){
			cout << vect[i];
		}
		printf("\n");
	}
}