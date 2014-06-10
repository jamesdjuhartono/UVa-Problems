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

int psq[10001];

int main(){
    int tc, casenum = 1;
    scanf("%d\n", &tc);
    
    memset(psq, 0, sizeof psq);
    for(int i = 1; i <= 100; i++){
        psq[(int)pow(i,2)] = 1;
    }

    while(tc -- > 0){
        printf("Case #%d:\n", casenum++);
        string line;
        getline(cin, line);
        vector<char> cs;
        for(int i = 0; i < line.length(); i++){
            if(line[i] >= 'a' && line[i] <= 'z') cs.push_back(line[i]);
        }

        if(!psq[cs.size()]) {
            printf("No magic :(\n");
            continue;
        }

        int k = sqrt((double) cs.size());
        char matrix[100][100];
        int idx = 0;
        for(int i = 0; i < k; i++){
            for(int j = 0; j < k; j++){
                matrix[i][j] = cs[idx++];
            }
        }
        string s1 (cs.begin(), cs.end());
        string s2 (cs.rbegin(), cs.rend());
        string s3 = "", s4 = "";
        for(int i = 0; i < k; i++){
            for(int j = 0; j < k; j++){
                s3 += matrix[j][i];
                s4 += matrix[k-j-1][k-i-1];
            }
        }
        if(s1 == s2 && s2 == s3 && s3 == s4) printf("%d\n", k);
        else printf("No magic :(\n");
    }
}
