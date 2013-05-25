#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input, output;

    while(cin >> input)
    {
        output = "";
        for(int i = 0; i < input.length(); i++)
            output += char(int(input.at(i))-7);

        cout << output << endl;
    }
    return 0;
}
