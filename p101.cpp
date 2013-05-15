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
#include <string.h>
#include <string>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int main(){
	int n;
	scanf("%d", &n);
	vector<vi> blocks;
	map<int, ii> pos;
	blocks.assign(n, vi());

	for (int i = 0; i < n; i++){
		pos[i] = make_pair(i,0);
		blocks[i].push_back(i);
	}

	string cmd;
	while(cin >> cmd && cmd != "quit"){

		int a, b;
		string cmd2;

		cin >> a >> cmd2 >> b;
		if(a == b || pos[a].first == pos[b].first){	
			continue;
		}
		vi set1 = blocks[pos[a].first];
		vi set2 = blocks[pos[b].first];
		int idxa = pos[a].first;
		int idxb = pos[b].first;
		int loca = pos[a].second;
		int locb = pos[b].second;

		if (cmd == "move"){
			if (cmd2 == "onto"){
				//remove all blocks above block a to their normal position
				for (int i = loca+1; i < set1.size(); i++){
					int curr = set1[i];
					blocks[curr].push_back(curr);
					pos[curr] = make_pair(curr, 0);
					blocks[idxa].pop_back();
				}

				//remove all blocks above block b to their normal position
				for (int i = locb+1; i < set2.size(); i++){
					int curr = set2[i];
					blocks[curr].push_back(curr);
					pos[curr] = make_pair(curr, 0);
					blocks[idxb].pop_back();
				}

				blocks[idxb].push_back(set1[loca]);
				blocks[idxa].pop_back(); 
				pos[a] = make_pair(idxb, locb+1);

			} else if (cmd2 == "over"){
				//remove all blocks on top of a to their normal position
				for (int i = loca+1; i < set1.size(); i++){
					int curr = set1[i];
					blocks[curr].push_back(curr);
					pos[curr] = make_pair(curr, 0);
					blocks[idxa].pop_back();
				}

				blocks[idxb].push_back(set1[loca]);
				blocks[idxa].pop_back();
				pos[a] = make_pair(idxb, set2.size());
			}
		} else if(cmd == "pile"){
			if (cmd2 == "onto"){
				//remove all blocks on top of b to their normal position
				for (int i = locb+1; i < set2.size(); i++){
					int curr = set2[i];
					blocks[curr].push_back(curr);
					pos[curr] = make_pair(curr, 0);
					blocks[idxb].pop_back();
				}

				//move all blocks from a to top of b.
				for (int i = loca; i < set1.size(); i++){
					int curr = set1[i];
					blocks[idxb].push_back(curr);
					pos[curr] = make_pair(idxb, blocks[idxb].size()-1);
					blocks[idxa].pop_back();
				}

			} else if (cmd2 == "over"){

				//move all blocks from a to top of b.
				for (int i = loca; i < set1.size(); i++){
					int curr = set1[i];
					blocks[idxb].push_back(curr);
					pos[curr] = make_pair(idxb, blocks[idxb].size()-1);
					blocks[idxa].pop_back();
				}
			}
		}
	}

	for (int i = 0; i < blocks.size(); i++){
		printf("%d:", i);
		for(int j = 0; j < blocks[i].size(); j++){
			printf(" %d", blocks[i][j]);
		}
		printf("\n");
	}
}