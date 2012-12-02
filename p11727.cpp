#include <iostream>
using namespace std;

int main()
{
    int numCase, x, y, z, temp;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> x >> y >> z;
        if((x < y && x > z) || (x < z && x > y))
            cout << "Case " << i+1 << ": " << x << endl;
        else if((y < x && y > z) || (y < z && y > x))
            cout << "Case " << i+1 << ": " << y << endl;
        else if((z < x && z > y) || (z < y && z > x))
            cout << "Case " << i+1 << ": " << z << endl;
    }
    return 0;
}
