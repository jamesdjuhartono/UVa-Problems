#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    int numCase, numEggs, maxCap, maxWeight;
    int currCap, currWeight;
    int weights[30];

    cin >> numCase;
    for(int i = 1; i <= numCase; i++)
    {
        memset(weights,0,30);
        currCap = 0;
        currWeight = 0;

        cin >> numEggs >> maxCap >> maxWeight;
        for(int j = 0; j < numEggs; j++)
            cin >> weights[j];

        sort(weights, weights+numEggs);

        for(int j = 0; j < numEggs; j++)
        {
            currWeight += weights[j];
            if(currWeight <= maxWeight)
                currCap++;
            else
                break;
        }
        if(currCap > maxCap)    currCap = maxCap;

        cout << "Case " << i << ": " << currCap << endl;
    }

    return 0;
}
