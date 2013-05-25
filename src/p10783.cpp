#include <iostream>

using namespace std;

int main()
{
    int numCase;
    int min, max, sum, a, b;

    cin >> numCase;

    for(int i = 1; i <= numCase; i++)
    {
        sum = 0;
        cin >> a >> b;
        if(a % 2 == 0)  min = a+1;
        else            min = a;

        if(b % 2 == 0)  max = b-1;
        else            max = b;

        for(int j = min; j <= max; j+=2)
            sum += j;

        cout << "Case " << i << ": " << sum << endl;
    }

    return 0;
}
