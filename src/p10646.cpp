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
    int tc, casenum=1;
    scanf("%d", &tc);

    while(tc-->0){
        vector<string> deck1, deck2;
        string tmp;
        for(int i = 0; i < 27; i++){
            cin >> tmp;
            deck1.push_back(tmp);
        }
        for(int i = 0; i < 25; i++){
            cin >> tmp;
            deck2.push_back(tmp);
        }
        
        int y = 0;
        for(int i = 0; i < 3; i++){
            string curr = deck1.back();
            int x;
            if(curr[0] >= '2' && curr[0] <= '9') x = curr[0] - '0';
            else x = 10;
            y += x;
            deck1.pop_back();
            for(int j = 0; j < 10-x; j++) deck1.pop_back();
        }
        string card;
        if(deck1.size() >= y) card = deck1[y-1];
        else card = deck2[y-deck1.size()-1];
        printf("Case %d: %s\n", casenum++, card.c_str());
    }
}
