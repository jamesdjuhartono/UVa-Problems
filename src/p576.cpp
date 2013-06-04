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

bool isVowel(char c){
	if(c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' || c == 'y'){
		return true;
	}
	return false;
}

int count_syllable(string s){
	int counter = 0;
	for(int i = 1; i < s.length(); i++){
		if(isVowel(s.at(i)) && !isVowel(s.at(i-1))){
			counter++;
		}
	}
	return counter;
}

int main(){
	string line;
	while(getline(cin, line)){
		istringstream ss(line);
		string token;

		vector<string> vect;
		while(getline(ss, token, '/')){
			vect.push_back("t"+token+"");
		}

		if(vect[0].compare("te") == 0 && vect[1].compare("to") == 0 && vect[2].compare("ti") == 0){
			break;
		}

		if(count_syllable(vect[0]) != 5){
			printf("1\n");
		} else if(count_syllable(vect[1]) != 7){
			printf("2\n");
		} else if(count_syllable(vect[2]) != 5){
			printf("3\n");
		} else{
			printf("Y\n");
		}
	}
}