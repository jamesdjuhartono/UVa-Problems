#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    int output;

    cin >> x1 >> y1 >> x2 >> y2;

    while(x1 != 0 || y2 != 0 || x2 != 0 || y2 != 0)
    {
        if(x1 == x2 && y1 == y2)
            output = 0;
        else if(x1 == x2 || y1 == y2 || fabs(x2-x1) == fabs(y2-y1))
            output = 1;
        else
            output = 2;

        cout << output << endl;
        cin >> x1 >> y1 >> x2 >> y2;
    }

    return 0;
}
