#include <iostream>

using namespace std;

int table[150];

void pre_comp()
{
    bool array[150];
    int k, curr, m, city_left, counter;
    bool found;

    for(int i = 3; i < 150; i++)
    {
        found = false;
        m = 1;
        while(!found)
        {
            curr = 1;
            city_left = i-1;

            for(int j = 1; j <= i; j++)
                array[j] = false;

            array[curr] = true;

            while(!array[2])
            {
                counter = 0;
                while(counter != m)
                {
                    if(curr > i)
                        curr = 1;
                    if(!array[curr])
                        counter++;
                    if(counter < m)
                        curr++;
                }
                array[curr] = true;
                city_left--;
            }
            if(city_left == 0)
                break;
            else
                m++;
        }
        table[i] = m;
    }
}
int main()
{
    int input;

    pre_comp();
    cin >> input;

    while(input != 0)
    {
        cout << table[input] << endl;
        cin >> input;
    }
    return 0;
}
