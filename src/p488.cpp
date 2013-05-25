#include <iostream>

using namespace std;

int main()
{
    int numCase;
    int amp, freq;

    cin >> numCase;

    for(int i = 0; i < numCase; i++)
    {
        cin >> amp >> freq;
        for(int j = 0; j < freq; j++)
        {
            for(int k = 1; k <= amp; k++)
            {
                for(int m = 1; m <= k; m++)
                    cout << k;
                cout << endl;
            }
            for(int k = amp-1; k >= 1; k--)
            {
                for(int m = k; m >= 1; m--)
                    cout << k;
                cout << endl;
            }
            if(j != freq-1)
                cout << endl;
        }
        if(i != numCase -1)
            cout << endl;
    }

    return 0;
}
