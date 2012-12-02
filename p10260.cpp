#include <iostream>
#include <string>

using namespace std;

int main()
{
    int val[26] = {0,1,2,3,0,1,2,0,0,2,2,4,5,5,0,1,2,6,2,3,0,1,0,2,0,2};
    int prev, curr;
    string input;
    char ch;

    while(cin >> input)
    {
        prev = 0;
        for(int i = 0; i < input.length(); i++)
        {
            ch = input.at(i);
            curr = val[(int)ch - 65];

            if(curr != prev && curr != 0)
                cout << curr;

            prev = curr;
        }
        cout << endl;
    }
    return 0;
}
