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
    scanf("%d", &tc);
    while(tc-- > 0){
        int n, b, c;
        scanf("%d %d %d", &n, &b, &c);
        map<int, int> ladders;
        vi pos;
        pos.assign(n, 1);
        for(int i = 0; i < b; i++){
            int a, b;
            scanf("%d %d", &a, &b);
            ladders[a] = b;
        }
        bool end = false;
        for(int i = 0; i < c; i++){
            int r, curr;
            scanf("%d", &r);
            if(!end){
                curr = pos[i%n] + r;
                if(ladders.count(curr)) curr = ladders[curr];
                pos[i%n] = curr;
                if(curr >= 100) end = true;
            }
        }
        for(int i = 0; i < pos.size(); i++){
            printf("Position of player %d is %d.\n", i+1, pos[i]);
        }
    }
}
