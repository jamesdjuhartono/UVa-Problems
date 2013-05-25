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

struct elephant
{
	int w, s, index;
	elephant(int _w, int _s, int _index) : w(_w), s(_s), index(_index) {}
};

bool operator<(const elephant& a,const elephant& b)
{
    return (a.w < b.w);
}


int main(){
	int w, s, idx = 1;
	vector<elephant> vec;
	while(scanf("%d", &w) != EOF){
		scanf("%d", &s);
		vec.push_back(elephant(w,s,idx++));
	}
	sort(vec.begin(), vec.end());
	int dp[vec.size()];
	int p[vec.size()];

	int maxlen = 0;
	int maxidx = 0;

	for(int i = 0; i < vec.size(); i++){
		//printf("%d %d %d\n", vec[i].w, vec[i].s, vec[i].index);
		dp[i] = 1;
		p[i] = -1;
		for(int k = 0; k < i; k++){
			if(vec[i].w > vec[k].w && vec[i].s < vec[k].s){
				if(dp[i] < dp[k]+1){
					dp[i] = dp[k]+1;
					p[i] = k;
				}
			}
		}
		if(dp[i] > maxlen){
			maxlen = dp[i];
			maxidx = i;
		}
	}
	printf("%d\n", maxlen);
	
	int curridx = maxidx;
	vi revp;
	while(curridx != -1){
		revp.push_back(vec[curridx].index);
		curridx = p[curridx];
	}
	for(int i = revp.size()-1; i >= 0; i--){
		printf("%d\n", revp[i]);
	}
}
