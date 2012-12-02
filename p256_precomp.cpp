#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long i;

    for(i = 0; i < 1000000; i++)
    {
        if( pow( (i%1000) + (i/1000),2 ) == i)
            cout << i << endl;
    }
    return 0;
}
