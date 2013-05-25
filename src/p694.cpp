#include <iostream>

using namespace std;

int main()
{
    int count, numCase = 1;
    long int a, a2, limit;

    while(cin >> a >> limit)
    {
        if(a < 0  || limit < 0) break;
        count = 1;
        a2 = a;
        while(a2 != 1 && a2 <= limit)
        {
            if(a2 % 2 == 0) a2 = a2/2;
            else            a2 = 3*a2 + 1;

            if(a2 <= limit) count++;
        }
        cout << "Case " << numCase++ << ": A = " << a << ", limit = " << limit << ", number of terms = " << count << endl;
    }

    return 0;
}
