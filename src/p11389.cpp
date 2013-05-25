#include <iostream>
#include <algorithm>

using namespace std;

bool comp(int x, int y){return x > y;}

int main()
{
    int numDrivers, maxDist, ot_price, cost;
    int *morning, *evening;

    while(cin >> numDrivers >> maxDist >> ot_price)
    {
        if(numDrivers == 0 && maxDist == 0 && ot_price == 0)    break;
        morning = new int[numDrivers];
        evening = new int[numDrivers];

        for(int i = 0; i < numDrivers; i++)
            cin >> morning[i];
        for(int i = 0; i < numDrivers; i++)
            cin >> evening[i];

        sort(morning,morning+numDrivers);
        sort(evening,evening+numDrivers,comp);

        cost = 0;

        for(int i = 0; i < numDrivers; i++)
        {
            if(morning[i] + evening[i] > maxDist)
                cost += ot_price*(morning[i] + evening[i] - maxDist);
        }
        cout << cost << endl;
    }
    return 0;
}
