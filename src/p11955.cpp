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
	int tc, casenum = 1;
	scanf("%d\n", &tc);

	while(tc-- > 0){
		string line;
		getline(cin, line);
		int f = 0, s = 0, t = 0;
		for(int i = 1; i < line.length(); i++){
			if(line.at(i) == '+'){
				break;
			}
			f++;
		}
		string var1 = line.substr(1, f);
		for(int i = f+2; i < line.length(); i++){
			if(line.at(i) == ')'){
				t = i;
				break;
			}
			s++;
		}
		string var2 = line.substr(f+2, s);
		string p = line.substr(t+2);
		istringstream ss(p);
		int power;
		ss >> power;

		printf("Case %d: ", casenum++);

		if(power == 1){
			cout << var1 << "+" << var2 << endl;
			continue;
		}

		for(int i = 0; i <= power; i++){
			int maxi = max (power - i, i);
		    ll coeff = 1;
		    int p = 1;

		    for (int j = maxi + 1; j <= power; j++) {
		        coeff *= j;
		        coeff /= p;
		        p++;
		    }
		    if (coeff > 1) cout << coeff;

		    if(power-i == 1) cout << "*" << var1;
		    else if(power-i == power) cout << var1 << "^" << power;
		    else if(power-i > 1) cout << "*" << var1 << "^" << (power-i);

		    if(i == 1) cout << "*" << var2;
		    else if(i == power) cout << var2 << "^" << power;
		    else if(i > 1) cout << "*" << var2 << "^" << i;

		    if(i != power) printf("+");
		}
		printf("\n");
	}
}