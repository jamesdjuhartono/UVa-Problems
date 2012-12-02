#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    map<string,int> conquest;
    map<string,int>::iterator it;
    string country, dummy;
    int numLines;

    cin >> numLines;
    for(int i = 0; i < numLines; i++)
    {
        cin >> country;
        getline(cin,dummy);
        if(conquest.find(country) != conquest.end())
            conquest[country]++;
        else
            conquest.insert(pair<string,int>(country,1));
    }

    for (it = conquest.begin(); it != conquest.end(); it++)
        cout << (*it).first << " " << (*it).second << endl;

    return 0;
}
