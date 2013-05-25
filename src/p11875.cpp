#include <iostream>

using namespace std;

int main()
{
    int numCase, numP, inp, ans;

    cin >> numCase;

    for(int i = 1; i <= numCase; i++)
    {
        cin >> numP;
        ans = numP/2;

        for(int j = 0; j < numP; j++)
        {
            cin >> inp;
            if(j == ans)    ans = inp;
        }
        cout << "Case " << i << ": " << ans << endl;
    }

    return 0;
}
