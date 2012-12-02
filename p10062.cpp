#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct maps
{
    int ascii;
    int freq;
} mapz[128];

bool comp(maps a, maps b)
{
    if(a.freq < b.freq)     return true;
    else if(a.freq == b.freq && a.ascii > b.ascii)   return true;
    return false;
}

int main()
{
    string input;
    bool first = true;

    for(int i = 32; i < 128; i++)
    {
        mapz[i].ascii = 0;
        mapz[i].freq = 0;
    }

    while(getline(cin,input))
    {
        if(!first)  cout << endl;
        else        first = false;

        for(int i = 0; i < input.length(); i++)
        {
            int ch = (int)input[i];
            mapz[ch].ascii = ch;
            mapz[ch].freq++;
        }
        sort(mapz+32, mapz+127, comp);

        for(int i = 32; i < 128; i++)
        {
            if(mapz[i].freq != 0)
            {
                cout << mapz[i].ascii << " " << mapz[i].freq << endl;
                mapz[i].ascii = 0;
                mapz[i].freq = 0;
            }
        }
    }

    return 0;
}
