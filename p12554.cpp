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
	string songraw = "Happy birthday to you Happy birthday to you Happy birthday to Rujia Happy birthday to you";
	istringstream iss(songraw);
	string tok;
	vector<string> song;
	while(iss >> tok){
		song.push_back(tok);
	}

	int n;
	scanf("%d", &n);
	vector<string> people;
	for(int i = 0; i < n; i++){
		string name;
		cin >> name;
		people.push_back(name);
	}

	int repeat = 16;
	if(people.size() > 16) repeat = 32;
	if(people.size() > 32) repeat = 48;
	if(people.size() > 48) repeat = 64;
	if(people.size() > 64) repeat = 80;
	if(people.size() > 80) repeat = 96;
	if(people.size() > 96) repeat = 112;

	for(int i = 0; i < repeat; i++){
		cout << people[i%people.size()] << ": " << song[i%16] << endl;
	}
}
