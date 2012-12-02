#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int numCase, numCan, numVotes, max;
    map<string, string> candidates;
    map<string, int>    votes;
    map<string, int>::iterator it;
    string name, party;
    bool tie;

    cin >> numCase;

    for(int i = 0; i < numCase; i++)
    {
        tie = false;
        candidates.clear();
        votes.clear();

        cin >> numCan;
        for(int j = 0; j < numCan; j++)
        {
            if(j == 0)  getline(cin,name);
            getline(cin,name);
            getline(cin,party);
            candidates[name] = party;
        }

        cin >> numVotes;
        for(int j = 0; j < numVotes; j++)
        {
            if(j == 0)  getline(cin, name);
            getline(cin, name);
            if(candidates.find(name) != candidates.end())
                votes[name]++;
        }

        max = 0;
        for(it = votes.begin(); it != votes.end(); it++)
        {
            if((*it).second > max)
            {
                max = (*it).second;
                name = (*it).first;
            }
            else if((*it).second == max)
                tie = true;
        }

        if((int)votes.size() == 0)  tie = true;

        if(tie) cout << "tie" << endl;
        else    cout << candidates[name] << endl;
        if(i < numCase-1)   cout << endl;
    }

    return 0;
}
