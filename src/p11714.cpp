#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int inp;

    while(cin >> inp)
        cout << (inp-1) + (int)log2(inp-1) << endl;

    return 0;
}
