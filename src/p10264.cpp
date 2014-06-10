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
#include <bitset>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define INF(int)1e9
#define EPS 1e-9

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        vi vals, potencies;
        int tmp;
        for(int i = 0; i < pow(2,n); i++){
            scanf("%d", &tmp);
            vals.push_back(tmp);
        }

        for(int i = 0; i < pow(2,n); i++){
            int pot = 0;
            for(int j = 0; j < n; j++){
                int neighbour = i ^ (1 << j);
                pot += vals[neighbour];
            }
            potencies.push_back(pot);
        }
        int ans = 0;
        for(int i = 0; i < pow(2,n); i++){
            for(int j = 0; j < n; j++){
                int neighbour = i ^ (1 << j);
                ans = max(ans, potencies[i] + potencies[neighbour]);
            }
        }
        printf("%d\n", ans);
    }
}
