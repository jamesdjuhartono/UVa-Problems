#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input, output;
    char ch;
    int set[26] = {'2','2','2','3','3','3','4','4','4','5','5','5','6','6','6','7','7','7','7','8','8','8','9','9','9','9'};

    while(cin >> input)
    {
        output = "";
        for(int i = 0; i < input.length(); i++)
        {
            ch = input.at(i);
            if((int)ch >= 65)
                output += set[(int)ch - 65];
            else
                output += ch;
        }
        cout << output << endl;
    }
    return 0;
}
