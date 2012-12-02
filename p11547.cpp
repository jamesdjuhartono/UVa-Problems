#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long x, res;
    int numCase;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> x;
        res = fabs(315*x + 36962);
        cout << (res%100)/10 << endl;
    }

    return 0;
}
