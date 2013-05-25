#include <iostream>

using namespace std;

int main()
{
    int numCase;
    long long x, y, z;

    cin >> numCase;
    for(int i = 1; i <= numCase; i++)
    {
        cin >> x >> y >> z;
        cout << "Case " << i << ": ";

        if(x + y <= z || x + z <= y || y + z <= x)
            cout << "Invalid" << endl;
        else
        {
            if( x == y && y == z)
                cout << "Equilateral" << endl;
            else if( x == y || x == z || y == z)
                cout << "Isosceles" << endl;
            else
                cout << "Scalene" << endl;
        }
    }
    return 0;
}
