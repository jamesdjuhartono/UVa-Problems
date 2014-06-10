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

vector<string> rolls;

int main(){
    string game;
    while(getline(cin, game)){
        if(game == "Game Over") break;
        rolls = split(game, ' ');
        int score = 0;
        int fc = 1, rc = 0;
        for(int i = 0; i < rolls.size(); i++){
            if(rolls[i][0] >= '0' && rolls[i][0] <= '9'){
                score += rolls[i][0] - '0';
                rc++;
            }
            else if(rolls[i][0] == '/'){
                rc++;
                score += 10 - (rolls[i-1][0] - '0');
                if(rolls[i+1][0] == 'X') score += 10;
                else score += rolls[i+1][0] - '0';
                
                if(fc == 10) break;
            } else if(rolls[i][0] == 'X'){
                rc+=2;
                score += 10;
                if(rolls[i+1][0] == 'X') score += 10;
                else score += rolls[i+1][0] - '0';

                if(rolls[i+2][0] == 'X') score += 10;
                else if(rolls[i+2][0] == '/') score += 10 - (rolls[i+1][0] - '0');
                else score += rolls[i+2][0] - '0';
                
                if(fc == 10) break;
            }
            if(rc == 2){
                rc = 0;
                fc++;
            }
        }
        printf("%d\n", score);
    }
}
