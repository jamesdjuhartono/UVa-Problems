#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int k, size, counter1, counter2, min, res;
    int array[13];
    string input;
    char dummy;

    scanf("%d",&size);
    gets(&dummy);

    while(size != 0)
    {
        for(int i = 0; i < size; i++)
        {
            counter1 = 0;
            counter2 = 0;
            getline(cin,input);
            for(k = 0; k < input.length(); k++)
            {
                if(input.at(k) == ' ')
                {
                    counter1 = k-1;
                    break;
                }
            }
            for(; k < input.length(); k++)
            {
                if(input.at(k) == 'X' || input.at(k) == 'x')
                {
                    counter2 = k;
                    break;
                }
            }
            array[i] = counter2 - counter1 - 1;
            if(array[i] < 0) array[i] = 0;
        }

        min = array[0];
        res = 0;

        for(int i = 1; i < size; i++)
            if(array[i] < min)
                min = array[i];

        //for(int i = 0; i < size; i++)
            //cout << array[i] << " ";

        for(int i = 0; i < size; i++)
            res += array[i] - min;

        cout << res << endl;
        scanf("%d",&size);
        gets(&dummy);
    }

    return 0;
}
