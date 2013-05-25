#include <iostream>
using namespace std;

int main()
{
    int numCase, numWalls, countHigh, countLow;
    int array[50];

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> numWalls;
        countHigh = 0;
        countLow = 0;
        for(int j = 0; j < numWalls; j++)
            cin >> array[j];

        for(int j = 0; j < numWalls-1; j++)
        {
            if(array[j] > array[j+1])
                countLow++;
            else if(array[j] < array[j+1])
                countHigh++;
        }
        cout << "Case " << (i+1) << ": " << countHigh << " " << countLow << endl;
    }
    return 0;
}
