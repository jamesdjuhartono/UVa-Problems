#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int numCase, numString, strLen;
vector<pair<string,int> > dna;
vector<pair<string,int> >::iterator it;

bool comp(pair<string,int> a, pair<string,int> b)   {return a.second < b.second;}

int measure(string x)
{
    int res = 0;

    for(int i = 0; i < strLen; i++)
        for(int j = i+1; j < strLen; j++)
            if(x.at(i) > x.at(j))   res++;
    return res;
}

int main()
{
    string inp;
    int r;

    cin >> numCase;

    for(int i = 0; i < numCase; i++)
    {
        cin >> strLen >> numString;
        dna.clear();

        for(int j = 0; j < numString; j++)
        {
            cin >> inp;
            r = measure(inp);
            dna.push_back(pair<string,int>(inp,r));
        }
        stable_sort(dna.begin(),dna.end(),comp);

        for (it = dna.begin(); it != dna.end(); ++it)
            cout << (*it).first << endl;

        if(i != numCase - 1)    cout << endl;
    }
    return 0;
}
