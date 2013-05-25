#include <iostream>

using namespace std;

int main()
{
    int h1, m1, h2, m2;
    int output;

    cin >> h1 >> m1 >> h2 >> m2;

    while(h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0)
    {
        output = 0;
        if(h1 < h2 && m1 <= m2)
            output = 60*(h2-h1) + (m2-m1);
        else if(h1 < h2 && m1 > m2)
            output = 60*(h2-h1-1) + (60-m1) + m2;
        else if(h1 == h2 && m1 <= m2)
            output = m2-m1;
        else if(h1 == h2 && m1 > m2)
            output = 23*60 + (60-m1) + m2;
        else if(h1 > h2 && m1 <= m2)
            output = 60*(24-(h1-h2)) + (m2-m1);
        else if(h1 > h2 && m1 > m2)
            output = 60*(23-(h1-h2)) + (60-m1) + m2;

        cout << output << endl;
        cin >> h1 >> m1 >> h2 >> m2;
    }

    return 0;
}
