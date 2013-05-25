#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int even, odd;
    string input;

    while (cin >> input)
    {
        if (input == "0")   break;

        even = 0;
        odd = 0;

        for (int i = 0; i < input.length(); i++)
        {
            if (i%2 == 0)   odd += input[i] - '0';
            else            even += input[i] - '0';
        }

        if (odd == even || (odd - even) % 11 == 0)
            cout << input << " is a multiple of 11." << endl;
       else
            cout << input << " is not a multiple of 11." << endl;
    }
    return 0;
}
