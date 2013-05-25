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
	char map[256];
	for(int i = 0; i < 256; i++) map[i] = '*';

	map['e']='q';map['r']='w';map['t']='e';
    map['y']='r';map['u']='t';map['i']='y';
    map['o']='u';map['p']='i';map['[']='o';
    map[']']='p';map['\\']='[';
    map['d']='a';map['f']='s';map['g']='d';
    map['h']='f';map['j']='g';map['k']='h';
    map['l']='j';map[';']='k';map['\'']='l';
    map['c']='z';map['v']='x';map['b']='c';
    map['n']='v';map['m']='b';map[',']='n';
    map['.']='m';map['/']=',';
    map['3']='1';map['4']='2';map['5']='3';
    map['6']='4';map['7']='5';map['8']='6';
    map['9']='7';map['0']='8';map['-']='9';
    map['=']='0';

    char ch;
    while(scanf("%c", &ch) != EOF){
    	if(map[tolower(ch)] != '*') printf("%c", map[tolower(ch)]);
    	else printf("%c", ch);
    }
}
