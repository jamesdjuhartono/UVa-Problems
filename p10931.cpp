#include <iostream>
#include <string>

using namespace std;

int main()
{
    int input, count;
    string bin;

    cin >> input;

    while(input != 0)
    {
        count = 0;
        bin = "";
        while(input > 0)
        {
            if(input%2 == 1)
            {
                count++;
                bin = "1"+bin;
            }
            else
                bin = "0"+bin;

            input /= 2;
        }

        cout << "The parity of " << bin << " is " << count << " (mod 2)." << endl;
        cin >> input;
    }

    return 0;
}
