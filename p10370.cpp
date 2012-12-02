#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int numCase, numStd, sum, avg, above_avg;
    int array[1000];
    double percent;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> numStd;
        sum = 0;
        avg = 0;
        above_avg = 0;
        for(int j = 0; j < numStd; j++)
        {
            cin >> array[j];
            sum += array[j];
        }
        avg = sum/numStd;
        for(int j = 0; j < numStd; j++)
            if(array[j] > avg)
                above_avg++;

        above_avg *= 100;
        percent = (double)above_avg/(double)numStd;
        printf("%.3f",percent);
        cout << "%" << endl;
    }

    return 0;
}
