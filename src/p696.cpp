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
    int n, m;
    while(scanf("%d %d", &n, &m) != EOF && n!=0 && m!=0){
        int ans = ((n*m)+1)/2;
        int mini = min(n, m);
        int maxi = max(n, m);
        if(mini== 1) ans = maxi;
        else if(mini == 2) ans = maxi/4 * 4 + (maxi % 4 == 1 ? 2 : (maxi % 4 > 1 ? 4 : 0));
        printf("%d knights may be placed on a %d row %d column board.\n",ans,n,m);
    }
}
