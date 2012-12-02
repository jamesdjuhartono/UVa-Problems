#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, res;

    while(cin >> a >> b >> c >> d >> e)
    {
        if(!a && !b && !c && !d && !e)
            break;

        res = a * b * c * d * d * e * e;
        cout << res << endl;
    }

    return 0;
}
