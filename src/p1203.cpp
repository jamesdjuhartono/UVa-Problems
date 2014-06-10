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
    string dummy;
    int q, p;
    vii datas;
    while(cin >> dummy && dummy != "#"){
        scanf("%d %d", &q, &p);
        datas.push_back(ii(p,q));
    }
    int k;
    scanf("%d", &k);
    priority_queue<ii, vii, greater<ii> > pque;
    for(int i = 0; i < datas.size(); i++){
        for(int j = 1; j < k; j++){
            pque.push(ii(datas[i].first * j, datas[i].second));
        }
    }
    
    for(int i = 0; i < k; i ++){
        printf("%d\n", pque.top().second);
        pque.pop();
    }
}
