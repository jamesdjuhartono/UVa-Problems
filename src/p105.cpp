#include <iostream>

using namespace std;

int main()
{
    int field[10000];
    int start, end, height, current;
    int min, max;

    for(int i = 0; i < 10000; i++)
        field[i] = 0;

    min = 10000;
    max = 0;

    while(cin >> start >> height >> end)
    {
        if(start < min) min = start;
        if(end > max) max = end;

        for(int i = start; i < end; i++)
            if(height > field[i])
                field[i] = height;
    }

    current = 0;

    for(int i = min; i <= max; i++)
    {
        if(field[i] != current)
        {
            if(i == max)
                cout << i << " " << field[i] << endl;
            else
                cout << i << " " << field[i] << " ";
            current = field[i];
        }
    }

    return 0;
}
