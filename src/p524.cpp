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

int n, stats;
int primes[32], arr[17], vis[17];
vector<vi> adjList;

void solve(int prev, int cnt){
    vis[prev] = 1;
    arr[cnt] = prev;
    
    if(cnt == n){
        if(primes[prev + arr[1]]){
            for(int i = 1; i <= n; i++){
                printf("%d", arr[i]);
                if(i != n) printf(" ");
            }
            printf("\n");
        }
        vis[prev] = 0;
        return;
    }
    
    for(int i = 0; i < adjList[prev].size(); i++){
        if(!vis[adjList[prev][i]] && adjList[prev][i] <= n){
            solve(adjList[prev][i], cnt + 1);
        }
    }
    vis[prev] = 0;
}

int main(){
    memset(primes, 0, sizeof primes);
    primes[2] = primes[3] = 1;
    primes[5] = primes[7] = 1;
    primes[11] = primes[13] = 1;
    primes[17] = primes[19] = 1;
    primes[23] = primes[29] = 1;
    primes[31] = 1;

    adjList.assign(17, vi());
    for(int i = 1; i < 17; i++){
        for(int j = 1; j < 17; j++){
            if(primes[i+j] && i != j) adjList[i].push_back(j);
        }
    }

    int casenum = 1;
    while(scanf("%d", &n) != EOF){
        stats = 0;
        memset(arr, 0, sizeof arr);
        memset(vis, 0, sizeof vis);
        if(casenum > 1) printf("\n");
        printf("Case %d:\n", casenum++);
        solve(1, 1); 
    }
}
