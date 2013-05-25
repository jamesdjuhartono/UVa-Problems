#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, y, z;

    cin >> x >> y >> z;
    while(x != 0 || y != 0 || z != 0)
    {
        if(pow(x,2) + pow(y,2) == pow(z,2) || pow(z,2) + pow(y,2) == pow(x,2) || pow(x,2) + pow(z,2) == pow(y,2))
            cout << "right" << endl;
        else
            cout << "wrong" << endl;

        cin >> x >> y >> z;
    }
    return 0;
}
