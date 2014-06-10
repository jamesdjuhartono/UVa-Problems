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

#define INF(int)1e9
#define EPS 1e-9

int main(){
    int tc;
    scanf("%d\n", &tc);
    string line, sline;
    
    vector<string> orig;
    vector<string> sorted;
    while(getline(cin, line) || tc > 0){
        if(line.empty()){
            sort(orig.begin(), orig.end());
            for(int i = 0; i < orig.size(); i++){
                sline = orig[i];
                sline.erase(remove(sline.begin(), sline.end(), ' '), sline.end());
                sort(sline.begin(), sline.end());
                sorted.push_back(sline);
            }
            for(int i = 0; i < orig.size(); i++){
                for(int j = i+1; j < orig.size(); j++){
                    if(sorted[i] == sorted[j])
                        printf("%s = %s\n", orig[i].c_str(), orig[j].c_str());
                }
            }
            tc--;
            if(tc) printf("\n");
            orig.clear();
            sorted.clear();
        }
        orig.push_back(line);
    }
}
