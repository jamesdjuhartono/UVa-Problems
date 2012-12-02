#include <iostream>
#include <string>

using namespace std;

int main()
{
    int inp, groups;
    string input, output;

    cin >> inp;
    while(inp != 0)
    {
        output = "";
        cin >> input;
        groups = input.length()/inp;

        for(int i = groups-1; i < input.length(); i+= groups)
            for(int j = 0; j < groups; j++)
                output += input.at(i-j);

        cout << output << endl;
        cin >> inp;
    }

    return 0;
}
