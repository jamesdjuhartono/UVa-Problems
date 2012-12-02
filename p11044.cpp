#include <iostream>

using namespace std;

int main()
{
    int numCase, m, n;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> m >> n;
        cout << (m/3)*(n/3) << endl;

    }

    return 0;
}
