#include <iostream>

using namespace std;

int main()
{
    int numCase, l, w, h;

    cin >> numCase;
    for(int i = 1; i <= numCase; i++)
    {
        cin >> l >> w >> h;

        cout << "Case " << i << ": ";
        if(l <= 20 && w <= 20 && h <= 20)
            cout << "good" << endl;
        else
            cout << "bad" << endl;
    }

    return 0;
}
