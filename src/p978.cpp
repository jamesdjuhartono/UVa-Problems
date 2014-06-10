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
    while(tc-->0){
        int b, sg, sb, tmp;
        multiset<int> blue;
        multiset<int> green;
        multiset<int>::iterator bi, gi;
        scanf("%d %d %d", &b, &sg, &sb);
        
        for(int i = 0; i < sg; i++){
            scanf("%d", &tmp);
            green.insert(tmp);
        }
        for(int i = 0; i < sb; i++){
            scanf("%d", &tmp);
            blue.insert(tmp);
        }

        while(blue.size() > 0 && green.size() > 0){
            vi tmpgreen, tmpblue;
            for(int i = 0; i < b; i++){
                if(blue.size() == 0 || green.size() == 0) break;
                bi = blue.end(); bi--;
                gi = green.end(); gi--;
                if(*bi > *gi) tmpblue.push_back(*bi - *gi);
                else if(*gi > *bi) tmpgreen.push_back(*gi - *bi);
                blue.erase(bi);
                green.erase(gi);
            }
            for(int i = 0; i < tmpblue.size(); i++) blue.insert(tmpblue[i]);
            for(int i = 0; i < tmpgreen.size(); i++) green.insert(tmpgreen[i]);
        }
        if(blue.size() == 0 && green.size() == 0) printf("green and blue died\n");
        else if(blue.size()){
            printf("blue wins\n");
            for(multiset<int>::reverse_iterator rib = blue.rbegin(); rib != blue.rend(); rib++){
                printf("%d\n", *rib);
            }
        } else if(green.size()){
            printf("green wins\n");
            for(multiset<int>::reverse_iterator rig = green.rbegin(); rig != green.rend(); rig++){
                printf("%d\n", *rig);
            }
        }
        if(tc) printf("\n");
    }
}
