#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int input, counter = 1;

    cin >> input;

    while(input >= 0)
    {
        cout << "Case " << counter << ": "<< (int) ceil(log2(input)) << endl;
        cin >> input;
        counter++;
    }

    return 0;
}
