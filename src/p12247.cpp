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
    int x[3], y[3];
    vi vals;
    while(scanf("%d %d %d %d %d", &x[0], &x[1], &x[2], &y[0], &y[1]) && x[0] != 0){
        sort(x, x+3, greater<int>());
        y[2] = 0;
        sort(y, y+3, greater<int>());
        vals.assign(53, 0);
        for(int i = 0; i < 3; i++) vals[x[i]] = 1;
        for(int i = 0; i < 2; i++) vals[y[i]] = 1;
        
        if(x[0] > y[0] && x[1] > y[1]) printf("-1\n"); //can't win
        else if(y[0] > x[0] && y[1] > x[0]) printf("%d\n", find(vals.begin()+1, vals.end(), 0) - vals.begin()); //confirm win
        else{
            int ans = 0;
            if(y[0] > x[0]){
                if(y[1] < x[1]) ans = find(vals.begin() + x[0], vals.end(), 0) - vals.begin();
                else ans = find(vals.begin() + x[1], vals.end(), 0) - vals.begin();
            } else{
                ans = find(vals.begin() + x[1], vals.end(), 0) - vals.begin();
            }
            if(ans < 1 || ans > 52) printf("-1\n");
            else printf("%d\n", ans);
        }
    }
}
