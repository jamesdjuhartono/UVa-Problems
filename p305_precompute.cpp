#include <iostream>

using namespace std;

int table[27];

void pre_comp()
{
    bool array[27];
    int k, curr, m, city_left, counter;
    int count_confirm;
    bool found, check, confirm;

    for(int i = 2; i <= 26; i+=2)
    {
        found = false;
        m = i/2+1;
        while(!found)
        {
            confirm = false;
            count_confirm = 0;
            curr = m;
            curr %= i;

            city_left = i-1;
            check = true;

            for(int j = 1; j <= i; j++)
                array[j] = false;

            array[curr] = true;

            while(check)
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

                for(int z = 1; z <= i/2; z++)
                    if(array[z])
                        check = false;
            }
            for(int z = i/2 + 1; z <= i; z++)
                if(array[z])    count_confirm++;

            if(count_confirm == i/2)
                break;
            else
                m++;
            while(m%i != 0 && m%i <= i/2)
                m++;
        }
        table[i] = m;
        cout << i/2 << " :" << table[i] << endl;
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
