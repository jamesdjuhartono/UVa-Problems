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
    
    map<int, int> fibopos;
    int a = 1, b = 2, tmp;
    fibopos[1] = 0;
    fibopos[2] = 1;
    for(int i = 2; i < 45; i++){
        //printf("%d ", a+b);
        fibopos[a+b] = i;
        tmp = a;
        a = b;
        b = tmp + b;
    }

    while(tc-->0){
        int n, tmp, maxi = 0;
        vi nums;
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d", &tmp);
            nums.push_back(tmp);
            maxi = max(maxi, tmp);
        }

        getchar();
        string line;
        getline(cin, line);
        
        char text[110];
        memset(text, ' ', sizeof text);
        int idx = 0;

        for(int i = 0 ; i < n; i++){
            while(!isupper(line[idx])) idx++;
            text[fibopos[nums[i]]] = line[idx++];
        }
        text[fibopos[maxi]+1] = '\0';
        printf("%s\n", text);
    }
}
