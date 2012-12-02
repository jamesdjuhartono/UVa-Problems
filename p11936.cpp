#include <iostream>

using namespace std;

int main()
{
    int numCase;
    int x, y, z;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> x >> y >> z;
        if(x + y > z && x + z > y && y + z > x)
            cout << "OK" << endl;
        else
            cout << "Wrong!!" << endl;
    }
    return 0;
}
