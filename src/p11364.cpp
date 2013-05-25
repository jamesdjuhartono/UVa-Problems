#include <iostream>

using namespace std;

int main()
{
    int numCase;
    int size, max, min;
    int array[20];

    cin >> numCase;

    for(int k = 0; k < numCase; k++)
    {
        cin >> size;
        for(int i = 0; i < size; i++)
            cin >> array[i];
        max = array[0];
        min = array[0];

        for(int i = 1; i < size; i++)
        {
            if(array[i] > max)
                max = array[i];
            if(array[i] < min)
                min = array[i];
        }

        cout << 2*(max-min) << endl;
    }

    return 0;
}
