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
        printf("Printing order for %d pages:\n", n);
        int s = (n+3) / 4; //# of sheets
        int fwd = 1, bwd = n;
        int m = s * 4;
        for(int i = 0; i < s; i++){
            string p1, p2, p3, p4;
            if(m > n){
                m--;
                p1 = "Blank";
            } else {
                p1 = to_string(bwd--);
            }
            p2 = to_string(fwd++);
			if(fwd > (s*2) || fwd > n) p3 = "Blank";
            else p3 = to_string(fwd++);
            if(m > n){
                m--;
                p4 = "Blank";
            } else{
                p4 = to_string(bwd--);
            }
            printf("Sheet %d, front: %s, %s\n", i+1, p1.c_str(), p2.c_str());
            if(p3 != "Blank" || p4 != "Blank")
				printf("Sheet %d, back : %s, %s\n", i+1, p3.c_str(), p4.c_str());
        }
    }
}
