#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numCase, rate, max;
    string input, output;

    cin >> numCase;
    for(int i = 1; i <= numCase; i++)
    {
        cout << "Case #" << i << ":" << endl;
        output = "";
        max = 0;
        for(int j = 0; j < 10; j++)
        {
            cin >> input >> rate;
            if(rate == max)
                output += '\n' + input;
            else if(rate > max)
            {
                output = input;
                max = rate;
            }
        }
        cout << output << endl;
    }

    return 0;
}
