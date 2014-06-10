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

vector<string> &split(const string &s, char delim, vector<string> &elems) {
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}


vector<string> split(const string &s, char delim) {
    vector<string> elems;
    split(s, delim, elems);
    return elems;
}

int board[8][8];

void set_board(int x, int y){
    if(x >= 0 && x <= 7 && y >= 0 && y <= 7 && board[x][y] != 2) board[x][y] = 1;
}

void cover(int x, int y, char piece){
    switch(piece){
        case 'k':
        case 'K':
            set_board(x-1, y);
            set_board(x+1, y);
            set_board(x, y-1);
            set_board(x, y+1);
            set_board(x-1, y-1);
            set_board(x-1, y+1);
            set_board(x+1, y-1);
            set_board(x+1, y+1);
            break;
        case 'p':
            set_board(x+1, y+1);
            set_board(x+1, y-1);
            break;
        case 'P':
            set_board(x-1, y+1);
            set_board(x-1, y-1);
            break;
        case 'n':
        case 'N':
            set_board(x+1, y+2);
            set_board(x+1, y-2);
            set_board(x-1, y+2);
            set_board(x-1, y-2);
            set_board(x+2, y+1);
            set_board(x+2, y-1);
            set_board(x-2, y+1);
            set_board(x-2, y-1);
            break;
        case 'r':
        case 'R':
            for(int i = 1; i < 8; i++){ 
                if(board[x][y+i] == 2) break;
                set_board(x, y+i);
            }
            for(int i = 1; i < 8; i++){ 
                if(board[x][y-i] == 2) break;
                set_board(x, y-i);
            }
            for(int i = 1; i < 8; i++){ 
                if(board[x+i][y] == 2) break;
                set_board(x+i, y);
            }
            for(int i = 1; i < 8; i++){ 
                if(board[x-i][y] == 2) break;
                set_board(x-i, y);
            }
            break;
        case 'b':
        case 'B':
            for(int i = 1; i < 8; i++){
                if(board[x-i][y-i] == 2) break;
                set_board(x-i, y-i);
            }
            for(int i = 1; i < 8; i++){
                if(board[x+i][y-i] == 2) break;
                set_board(x+i, y-i);
            }
            for(int i = 1; i < 8; i++){
                if(board[x-i][y+i] == 2) break;
                set_board(x-i, y+i);
            }
            for(int i = 1; i < 8; i++){
                if(board[x+i][y+i] == 2) break;
                set_board(x+i, y+i);
            }
            break;
        case 'q':
        case 'Q':
            for(int i = 1; i < 8; i++){ 
                if(board[x][y+i] == 2) break;
                set_board(x, y+i);
            }
            for(int i = 1; i < 8; i++){ 
                if(board[x][y-i] == 2) break;
                set_board(x, y-i);
            }
            for(int i = 1; i < 8; i++){ 
                if(board[x+i][y] == 2) break;
                set_board(x+i, y);
            }
            for(int i = 1; i < 8; i++){ 
                if(board[x-i][y] == 2) break;
                set_board(x-i, y);
            }
            for(int i = 1; i < 8; i++){
                if(board[x-i][y-i] == 2) break;
                set_board(x-i, y-i);
            }
            for(int i = 1; i < 8; i++){
                if(board[x+i][y-i] == 2) break;
                set_board(x+i, y-i);
            }
            for(int i = 1; i < 8; i++){
                if(board[x-i][y+i] == 2) break;
                set_board(x-i, y+i);
            }
            for(int i = 1; i < 8; i++){
                if(board[x+i][y+i] == 2) break;
                set_board(x+i, y+i);
            }
            break;
    }
}

int main(){
    string fen;
    while(cin >> fen){
        memset(board, 0, sizeof board);
        vector<string> lines = split(fen, '/');
        
        for(int i = 0; i < 8; i++){
            string curr = lines[i];
            int idx = 0;
            for(int j = 0; j < curr.length(); j++){
                if(curr[j] >= '1' && curr[j] <= '8') idx += curr[j] - '0';
                else {board[i][idx] = 2; idx++;}
            }
        }
        for(int i = 0; i < 8; i++){
            string curr = lines[i];
            int idx = 0;
            for(int j = 0; j < curr.length(); j++){
                if(curr[j] >= '1' && curr[j] <= '8') idx += curr[j] - '0';
                else {cover(i, idx, curr[j]); idx++;}
            }
        }

        int count = 0;
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(board[i][j] == 0) count++;
                //printf("%d ", board[i][j]);
            }//printf("\n");
        }
        printf("%d\n", count);
    }
}
