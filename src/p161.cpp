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
	int first, second, third;
	scanf("%d %d %d", &first, &second, &third);
	while(first != 0 || second != 0 || third != 0){
		vi vec;
		vec.push_back(first);
		vec.push_back(second);

		int mintime = min(first-5, second-5);

		if(third != 0){	
			vec.push_back(third);
			int num;
			while(scanf("%d", &num) != EOF && num != 0){
				vec.push_back(num);
				mintime = min(mintime, num-5);
			}
		}

		bool allgreen[18000+10];
		memset(allgreen, true, sizeof allgreen);

		for(int i = 0; i < 18000+10; i++){
			for(int j = 0; j < vec.size(); j++){
				allgreen[i] &= (i % (2*vec[j]) < vec[j] - 5);
				if(allgreen[i] == false){
					break;
				}
			}
		}

		int t = -1;
		for(int i = mintime; i < 18000+10; i++){
			if(allgreen[i]){
				t = i;
				break;
			}
		}

		if(t == -1){
			printf("Signals fail to synchronise in 5 hours\n");
		} else{
			int h = t / 3600;
			int m = (t % 3600) / 60;
			int s = t - h*3600 - m*60;

			printf("%02d:%02d:%02d\n", h, m, s);
		}
		
		scanf("%d %d %d", &first, &second, &third);
	}
}
