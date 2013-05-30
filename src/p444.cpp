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

void decode(string msg){
	string res = "";

	for(int i = msg.length()-1; i >= 0; i-=2){
		int first = int(msg[i] - '0');
		int second = int(msg[i-1] - '0');

		if(first == 1){
			int third = int(msg[i-2] - '0');
			i--;
			res += (char)((first*100) + (second*10) + third);
		} else{
			res += (char)(first*10 + second);
		}
	}
	cout << res << endl;
}

void encode(string msg){
	for(int i = msg.length()-1; i >= 0; i--){
		int curr = (int)msg[i];
		while(curr > 0){
			printf("%d", curr%10);
			curr /= 10;
		}
	}
	printf("\n");
}

int main(){
	string msg;
	while(getline(cin, msg)){
		if(isdigit(msg[0])) decode(msg);
		else encode(msg);
	}
}
