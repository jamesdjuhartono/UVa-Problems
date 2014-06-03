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
    set<int> valss;
    for (int i = 0; i <= 20; i++){
        valss.insert(i);
        valss.insert(i*2);
        valss.insert(i*3);
    }
    valss.insert(50);
    
    vi vals(valss.begin(), valss.end());
    int memo[50][50][50];
    int target, permut, combi;
    while(scanf("%d", &target) != EOF && target > 0){
        memset(memo, 0, sizeof memo);
        permut = combi = 0;
        for(int i = 0; i < vals.size(); i++){
            for(int j = 0; j < vals.size(); j++){
                for(int k = 0; k < vals.size(); k++){
                    if(vals[i] + vals[j] + vals[k] == target){
                        permut += 1;
                        if(!memo[i][j][k]){
                            memo[i][j][k] = memo[i][k][j] = memo[j][i][k] = memo[j][k][i] = memo[k][i][j] = memo[k][j][i] = 1;
                            combi += 1;
                        }
                    }
                }
            }
        }

        if(!permut) printf("THE SCORE OF %d CANNOT BE MADE WITH THREE DARTS.\n", target);
        else{
            printf("NUMBER OF COMBINATIONS THAT SCORES %d IS %d.\n", target, combi);
            printf("NUMBER OF PERMUTATIONS THAT SCORES %d IS %d.\n", target, permut);
        }
        for(int i = 0; i < 70; i++) printf("*"); printf("\n");
    }
    printf("END OF OUTPUT\n");
}
