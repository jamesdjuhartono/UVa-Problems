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
    string line;
    while(getline(cin, line)){
        int val = 0;
        int idx = 0;
        for(int i = 0; i < line.length(); i++){
            if(line[i] == ' '){ val = val << 1; idx++;}
            else if(line[i] == 'o'){ val = (val << 1) | 1; idx++;}
        }
        if(val) printf("%c", (char)val);
    }
}
