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

vi nums;
int vis[15];
set<vi> answers;

void solve(int pos, int target, vi ans){
    if(target == 0){
        vi cp = ans;
        sort(cp.begin(), cp.end(), greater<int>());
        answers.insert(cp);
    }
    for(int i = pos; i < nums.size(); i++){
        if(!vis[i]){
            vis[i] = 1;
            ans.push_back(nums[i]);
            solve(pos+1, target - nums[i], ans);
            vis[i] = 0;
            ans.pop_back();
        }
    }
}

int main(){
    int t, n, tmp;
    while(scanf("%d %d", &t, &n) != EOF && n != 0){
        memset(vis, 0, sizeof vis);
        nums.clear();
        answers.clear();
        for(int i = 0; i < n; i++){
            scanf("%d", &tmp);
            nums.push_back(tmp);
        }
        solve(0, t, vi());
        printf("Sums of %d:\n", t);
        if(answers.size() == 0) printf("NONE\n");
        for(set<vi>::reverse_iterator it = answers.rbegin(); it != answers.rend(); it++){
            vi vec = (*it);
            for(int i = 0; i < vec.size(); i++){
                printf("%d", vec[i]);
                if(i != vec.size() - 1) printf("+");
            }
            printf("\n");
        }
    }
}
