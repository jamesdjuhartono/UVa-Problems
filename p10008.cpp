#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>

using namespace std;

int freq[26];

bool comp(char a, char b)
{
    if(freq[(int)a-65] > freq[(int)b - 65])
        return true;
    else if(freq[(int)a-65] == freq[(int)b - 65] && a < b)
        return true;
    return false;
}

int main()
{
    vector<char> vect;
    string input;
    int numCase, val;

    cin >> numCase;
    getline(cin,input);
    memset(freq,0,sizeof freq);

    while(getline(cin,input))
    {
        for(int i = 0; i < input.length(); i++)
        {
            val = toupper(input.at(i));
            if(val >= 65 && val <= 90)
                freq[val-65]++;

            if(freq[val-65] == 1)
                vect.push_back((char)val);
        }
    }

    sort(vect.begin(),vect.end(),comp);
    for(int i = 0; i < vect.size(); i++)
        cout << vect[i] << " " << freq[(int)vect[i]-65] << endl;

    return 0;
}
