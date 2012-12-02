#include <iostream>
using namespace std;

int main()
{
    int numCase, numFarmers;
    unsigned long long x, y, dummy, sum;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        sum = 0;
        cin >> numFarmers;
        for(int j = 0; j < numFarmers; j++)
        {
            cin >> x >> dummy >> y;
            sum += x*y;
        }
        cout << sum << endl;
    }
    return 0;
}
