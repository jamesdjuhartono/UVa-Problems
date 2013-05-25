#include <iostream>

using namespace std;

int main()
{
    int input, mod, count;

    while(cin >> input)
    {
        mod = count = 0;
        do
        {
            mod = (mod*10 + 1) % input;
            count++;
        }
        while(mod != 0);

        cout << count << endl;
    }
    return 0;
}
