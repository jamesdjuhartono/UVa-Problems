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

int board[5][5];
map<int, ii> mapper;

bool check_bingo(int x){
    if(!mapper.count(x)) return false;
    int a = mapper[x].first;
    int b = mapper[x].second;
    board[a][b] = 0;

    if(board[0][0] + board[1][1] + board[2][2] + board[3][3] + board[4][4] == 0 ||
       board[0][4] + board[1][3] + board[2][2] + board[3][1] + board[4][0] == 0)
        return true;

    for(int i = 0; i < 5; i++){
        int rsum = 0, csum = 0;
        for(int j = 0; j < 5; j++){
            rsum += board[i][j];
            csum += board[j][i];
        }
        if(csum == 0 || rsum == 0) return true;
    }
}

int main(){
    board[2][2] = 0;
    int tc;
    scanf("%d", &tc);
    while(tc -- > 0){
        mapper.clear();
        int tmp;
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                scanf("%d", &tmp);
                if(i == 2 && j == 2) j++;
                board[i][j] = tmp;
                mapper[tmp] = ii(i, j);
            }
        }
        bool win = false;
        int idx = 0;
        for(int i = 0; i < 75; i++){
            scanf("%d", &tmp);
            if(!win){
                win = check_bingo(tmp);
                if(win) idx = i;
            }
        }
        printf("BINGO after %d numbers announced\n", idx+1);
    }
}
