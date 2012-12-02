#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b;

    while(cin >> a >> b)
    {
        if(a == 0 && b == 0)    break;
        cout << (int)((int)sqrt(b) - (int)sqrt(a-1)) << endl;
    }

    return 0;
}
