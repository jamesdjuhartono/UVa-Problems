#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int size;
    int sequence[3001];
    bool jolly[3001];
    bool check;

    while(cin >> size)
    {
        check = true;
        for(int i = 0; i < 3001; i++)
            jolly[i] = false;

        for(int i = 0; i < size; i++)
            cin >> sequence[i];

        for(int i = 1; i < size; i++)
            jolly[(int)fabs(sequence[i] - sequence[i-1])] = true;

        for(int i = 1; i < size; i++)
            if(!jolly[i])
                check = false;

        if(check)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
    }

    return 0;
}
