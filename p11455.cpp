#include <iostream>

using namespace std;

int main()
{
    unsigned int w, x ,y ,z;
    int numCase;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> w >> x >> y >> z;

        if(w == x && x == y && y == z)
            cout << "square" << endl;
        else if((w == x && y == z) || (w == y && x == z) || (w == z && x == y))
            cout << "rectangle" << endl;
        else if( w + x + y >= z && w + x + z >= y && w + y + z >= x && x + y + z >= w)
            cout << "quadrangle" << endl;
        else
            cout << "banana" << endl;
    }

    return 0;
}
