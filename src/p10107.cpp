#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int size, inp, median;
    int array[10000];

    size = 0;

    while(cin >> inp)
    {
        array[size] = inp;
        size++;
        sort(array,array+size);

        //for(int i = 0; i < size; i++)   cout << array[i] << " ";

        if(size%2 == 1) median = array[(int)ceil(size/2)];
        else            median = (int)floor((array[size/2 - 1] + array[size/2])/2);

        cout << median << endl;
    }

    return 0;
}
