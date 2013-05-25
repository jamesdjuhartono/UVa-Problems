#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numCase;
    string input;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> input;
        if(input.length() == 5)
            cout << 3 << endl;
        else
        {
            if((input.at(0) == 'o' && input.at(1) == 'n') || (input.at(0) == 'o' && input.at(2) == 'e') ||
               (input.at(1) == 'n' && input.at(2) == 'e'))
               cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}
