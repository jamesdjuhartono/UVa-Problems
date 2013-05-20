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

struct city
{
	vector<pair<char, char> > data;
	city() {}
};

int main(){
	bool finished = false;

	while(!finished){
		string inp;
		vector<city> vec;
		while(getline(cin, inp) && inp[0] != 'e'){
			if(inp[0] == '#'){
				finished = true;
				break;
			}
			string token;
			vector<pair<char, char> > data;

			istringstream iss(inp);
			while(getline(iss, token, ',')){
				data.push_back(make_pair(token[0], token[2]));
			}
			sort(data.begin(), data.end());
			city curr;
			curr.data = data;
			vec.push_back(curr);
		}

		if(finished){
			break;
		}

		int minchange = INF;
		int minidx = 0;
		for(int i = 0; i < vec.size(); i++){
			vector<pair<char, char> > currdata = vec[i].data;
			int totalchange = 0;
			for(int j = 0; j < vec.size(); j++){
				if (i == j) continue;
				int currchange = 0;
				for(int k = 0; k < 5; k++){
					if(currdata[k].second != vec[j].data[k].second){
						currchange++;
					}
				}
				totalchange += currchange;
			}
			if(totalchange < minchange){
				minchange = totalchange;
				minidx = i;
			}
		}
		printf("%d\n", minidx+1);
	}
}