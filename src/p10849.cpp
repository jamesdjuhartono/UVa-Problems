#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int numCase, numQ, size;
    int x1, y1, x2, y2;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> numQ >> size;

        for(int j = 0; j < numQ; j++)
        {
            cin >> x1 >> y1 >> x2 >> y2;

            if(x1 < 1 || y1 < 1 || x2 < 1 || y2 < 1 || x1 > size || y1 > size || x2 > size || y2 > size)
                cout << "no move" << endl;
            else if((int)fabs(x1-y1) % 2 != (int)fabs(x2-y2) % 2)
                cout << "no move" << endl;
            else if(x1 == x2 && y1 == y2)
                cout << 0 << endl;
            else if((int)fabs(x1-x2) == (int)fabs(y1-y2))
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}
