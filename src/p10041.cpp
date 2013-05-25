#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int compare (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int main()
{
    int numCase;
    int size, min, max, sum, opt;
    int array[500];

    cin >> numCase;

    for(int i = 0; i < numCase; i++)
    {
        cin >> size;
        sum = 0;

        for(int j = 0; j < size; j++)
            cin >> array[j];


        qsort (array, size, sizeof(int), compare);
        opt = array[size/2];

        for(int k = 0; k < size; k++)
            sum += (int)fabs(opt-array[k]);

        cout << sum << endl;
    }

    return 0;
}
