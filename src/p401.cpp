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

char rev[256];

bool isPalindrome(string s){
	for(int i = 0; i <= s.length()/2; i++){
		if(s[i] != s[s.length()-1-i]){
			return false;
		}
	}
	return true;
}

bool isMirror(string s){
	for(int i = 0; i <= s.length()/2; i++){
		if(rev[s[i]] == ' ' || rev[s[s.length()-1-i]] == ' ' || rev[s[i]] != s[s.length()-1-i]){
			return false;
		}
	}
	return true;
}

int main(){
	memset(rev, ' ', sizeof rev);
	rev['A'] = 'A'; rev['E'] = '3'; rev['H'] = 'H';
	rev['I'] = 'I'; rev['J'] = 'L'; rev['L'] = 'J';
	rev['M'] = 'M'; rev['O'] = 'O'; rev['S'] = '2';
	rev['T'] = 'T'; rev['U'] = 'U'; rev['V'] = 'V';
	rev['W'] = 'W'; rev['X'] = 'X'; rev['Y'] = 'Y';
	rev['Z'] = '5'; rev['1'] = '1'; rev['2'] = 'S';
	rev['3'] = 'E'; rev['5'] = 'Z'; rev['8'] = '8';

	string s;
	while(cin >> s){
		bool palindrome = isPalindrome(s);
		bool mirror = isMirror(s);

		cout << s << " -- ";

		if(palindrome && mirror){
			printf("is a mirrored palindrome.\n");
		} else if(mirror){
			printf("is a mirrored string.\n");
		} else if(palindrome){
			printf("is a regular palindrome.\n");
		} else{
			printf("is not a palindrome.\n");
		}
		printf("\n");
	}
}
