#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int numStd, max, count;
    map<vector<int>,int> freq;
    map<vector<int>,int>::iterator it;
    vector<int> vect(5);
    vector<vector<int> > vs;
    vector<vector<int> >::iterator vs_it;

    while(cin >> numStd)
    {
        if(numStd == 0) break;
        freq.clear();
        vs.clear();

        for(int i = 0; i < numStd; i++)
        {
            for(int j = 0; j < 5; j++)
                cin >> vect[j];

            sort(vect.begin(),vect.end());
            vs.push_back(vect);
            freq[vect]++;
        }

        max = 0;
        for(it = freq.begin(); it != freq.end(); it++)
            if((*it).second > max)      max = (*it).second;

        count = 0;
        for(vs_it = vs.begin(); vs_it != vs.end(); vs_it++)
            if(freq[*vs_it] == max)    count++;

        cout << count << endl;
    }

    return 0;
}
