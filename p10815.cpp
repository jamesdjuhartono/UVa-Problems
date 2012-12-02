#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <ctype.h>

using namespace std;

int main()
{
    string input, processed;
    set<string> dict;

    while(cin >> input)
    {
        processed = "";
        for(int i = 0; i < input.length(); i++)
        {
            char ch = input[i];
            if(isalpha(ch))
                processed += tolower(ch);
            else
            {
                dict.insert(processed);
                processed = "";
            }
        }

        if(processed != "" && isalpha(processed[processed.length()-1]))
            dict.insert(processed);
    }

    vector<string> dict_vect (dict.begin(), dict.end());
    sort(dict_vect.begin(), dict_vect.end());

    for(int i = 1; i < (int)dict_vect.size(); i++)
        cout << dict_vect[i] << endl;

    return 0;
}
