#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    map<int,int> freq;
    vector<int> order;
    int inp;

    while(cin >> inp)
    {
        if(freq.find(inp) == freq.end())
        {
            freq.insert(pair<int,int>(inp,1));
            order.push_back(inp);
        }
        else
            freq[inp]++;
    }

    for(int i = 0; i < order.size(); i++)
        cout << order.at(i) << " " << freq[order.at(i)] << endl;

    return 0;
}
