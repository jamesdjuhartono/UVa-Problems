#include <iostream>
using namespace std;

int main()
{
    int numQ, ctrX, ctrY, x, y;

    cin >> numQ;
    while(numQ != 0)
    {
        cin >> ctrX >> ctrY;
        for(int i = 0; i < numQ; i++)
        {
            cin >> x >> y;
            if(x == ctrX || y == ctrY)
                cout << "divisa" << endl;
            else if(x < ctrX && y < ctrY)
                cout << "SO" << endl;
            else if(x < ctrX && y > ctrY)
                cout << "NO" << endl;
            else if(x > ctrX && y > ctrY)
                cout << "NE" << endl;
            else
                cout << "SE" << endl;
        }
        cin >> numQ;
    }

    return 0;
}
