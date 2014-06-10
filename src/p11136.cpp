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
    int days;
    while(scanf("%d", &days) != EOF && days != 0){
        int bills; 
        long cost = 0;
        multiset<long> vals;
        multiset<long>::iterator mini, maxi;
        for(int i = 0; i < days; i++){
            scanf("%d", &bills);
            for(int j = 0; j < bills; j++){
                int tmp;
                scanf("%ld", &tmp);
                vals.insert(tmp);
            }
            mini = vals.begin();
            maxi = vals.end(); maxi--;
            cost += *maxi - *mini;
            vals.erase(mini);
            vals.erase(maxi);
        }
        printf("%ld\n", cost);
    }
}
