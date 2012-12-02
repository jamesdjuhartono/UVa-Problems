#include <iostream>
using namespace std;

int main()
{
    int numCase, n, inp, max;

    cin >> numCase;

    for(int i = 0; i < numCase; i++)
    {
        cin >> n;
        max = 0;
        for(int j = 0; j < n; j++)
        {
            cin >> inp;
            if(inp > max)
                max = inp;
        }
        cout << "Case " << (i+1) << ": " << max << endl;
    }

    return 0;
}
