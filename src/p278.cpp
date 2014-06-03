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

#define INF	(int)1e9
#define EPS 1e-9

int main(){
    int tc;
    cin >> tc;
    while (tc-->0){
        char piece;
        int n,m;
        cin >> piece >> n >> m;
        switch(piece){
            case 'r':
                printf("%d\n", min(n,m));
                break;
            case 'k':
                printf("%d\n", ((n*m)+1)/2);
                break;
            case 'Q':
                printf("%d\n", min(n,m));
                break;
            case 'K':
                printf("%d\n", ((n+1)/2)*((m+1)/2));
                break;
        }
    }
	return 0;
}
