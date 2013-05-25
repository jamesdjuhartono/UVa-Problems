#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main()
{
    int idx = 0, counter, size = 0;
    string input, lc_inp;
    string orig[1010], lc[1010];
    vector<string> ananagrams;

    while(cin >> input && input != "#")
    {
        orig[idx] = input;

        lc_inp = "";
        for(int i = 0; i < input.length(); i++)
            lc_inp += tolower(input[i]);

        lc[idx] = lc_inp;

        idx++;
    }

    for(int i = 0; i < idx; i++)
        sort(lc[i].begin(), lc[i].end());

    for(int i = 0; i < idx; i++)
    {
        counter = 0;
        for(int j = i+1; j < idx; j++)
        {
            if(lc[i] == lc[j] && lc[i] != "*")
            {
                counter++;
                lc[j] = "*";
            }
        }
        if(counter == 0 && lc[i] != "*")
        {
            ananagrams.push_back(orig[i]);
            size++;
        }
    }

    sort(ananagrams.begin(), ananagrams.end());
    for(int i = 0; i < size; i++)
        cout << ananagrams[i] << endl;

    return 0;
}
