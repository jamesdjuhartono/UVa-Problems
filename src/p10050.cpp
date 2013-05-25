#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int numCase, numParties, numDays, h, count;
    bool day[3651];

    cin >> numCase;

    for(int i = 0; i < numCase; i++)
    {
        cin >> numDays >> numParties;
        count = 0;
        for(int j = 0; j < 3651; j++)
            day[j] = false;

        for(int j = 0; j < numParties; j++)
        {
            cin >> h;
            for(int k = h; k <= numDays; k += h)
                day[k] = true;
        }

        for(int j = 1; j <= numDays; j++)
            if(day[j] && (j%7 != 0 && (j+1)%7 != 0))
                count++;

        cout << count << endl;
    }
    return 0;
}
