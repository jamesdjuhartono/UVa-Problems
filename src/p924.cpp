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

vector<vi> employees;
vi heard;
map<int, int> freq;

int bfs(int source){
	queue<int> q;
	q.push(source);
	
	int day = 0;
	heard[source] = day;
	
	while(!q.empty()){
		int curr = q.front();
		q.pop();
		day = heard[curr];

		vi friends = employees[curr];
		for(size_t i = 0; i < friends.size(); i++){
			int f = friends[i];
			if(heard[f] == -1){
				heard[f] = day + 1;

				if(freq.count(day+1) == 0){
					freq[day+1] = 1;
				} else{
					freq[day+1]++;
				}
				q.push(f);
			}
		}

	}

	if(freq.count(1) == 0){ //no one except the source
		return 0;
	} else{
		return 1;
	}
}

int main(){
	int e;
	scanf("%d", &e);

	employees.assign(e, vi());

	for(int i = 0; i < e; i++){
		int n;
		scanf("%d", &n);
		for(int j = 0; j < n; j++){
			int f;
			scanf("%d", &f);
			employees[i].push_back(f);
		}
	}

	int tc;
	scanf("%d", &tc);
	while(tc-- > 0){
		int s;
		scanf("%d", &s);
		heard.clear();
		heard.assign(e, -1);
		freq.clear();

		if(bfs(s) == 0){
			printf("0\n");
		} else{
			int maxfreq = 0, maxday = 0;
			for (map<int,int>::iterator it = freq.begin(); it != freq.end(); ++it){
				if(it->second > maxfreq){
					maxfreq = it->second;
					maxday = it->first;
				}
			}
			printf("%d %d\n", maxfreq, maxday);
		}
	}
}