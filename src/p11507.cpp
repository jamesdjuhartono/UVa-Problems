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
    int n;
    
    while(scanf("%d", &n) != EOF && n != 0){
        int sign = 1;
        char currdir = 'x';
        char move[3];
        for(int i = 0; i < n-1; i++){
            scanf("%s", move);
            if(move[0] == 'N') continue;

            if(currdir == 'x' && move[0] == '-') sign = -sign;
            else if(currdir == 'y' && move[0] == '+' && move[1] == 'y') sign = -sign;
            else if(currdir == 'z' && move[0] == '+' && move[1] == 'z') sign = -sign;

            if(currdir == 'x') currdir = move[1];
            else if(currdir == 'y' && move[1] == 'y') currdir = 'x';
            else if(currdir == 'z' && move[1] == 'z') currdir = 'x';
        }
        printf("%c%c\n", sign == 1 ? '+' : '-', currdir);
    }
}
