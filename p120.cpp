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

vi vec;

void flip(int idx){
	queue<int> q;
	while(vec.size() > idx){
		q.push(vec[vec.size()-1]);
		vec.pop_back();
	}
	while(!q.empty()){
		vec.push_back(q.front());
		q.pop();
	}
}

int main(){
	string inp;
	while(getline(cin, inp)){
		istringstream iss(inp);
		int val;
		vec.clear();
		while(iss >> val){
			vec.push_back(val);
		}
		reverse(vec.begin(), vec.end());

		cout << inp << endl;
		int sortedsize = 0;
		for(int i = 0; i < vec.size(); i++){
			vi::iterator it = max_element(vec.begin()+i, vec.end());
			int maxidx = it-vec.begin();
			
			if(maxidx == i){
				sortedsize++;
				continue;
			} else if(maxidx == vec.size()-1){
				printf("%d ", sortedsize+1);
				flip(sortedsize);
				sortedsize++;
			} else{
				printf("%d ", maxidx+1);
				printf("%d ", sortedsize+1);
				flip(maxidx);
				flip(sortedsize);
				sortedsize++;
			}
		}
		printf("0\n");
	}
}
