#include <iostream>
#include <cstdio>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int size, inp, divisor, gift, m, counter = 0;
    string name;
    vector <string> names;
    int money[10];

    while(scanf("%d",&size) != EOF)
    {
        memset(money,0,sizeof money);
        names.clear();
        for(int i = 0; i < size; i++)
        {
            cin >> name;
            names.push_back(name);
        }
        for(int i = 0; i < size; i++)
        {
            cin >> name;
            cin >> inp;
            cin >> divisor;
            for(m = 0; m < size; m++)
                if(names.at(m) == name)
                    break;

            if(divisor != 0)
            {
                money[m] -= (int)floor(inp / divisor)*divisor;
                gift = (int)floor(inp / divisor);
            }
            else
            {
                money[m] += 0;
                gift = 0;
            }
            for(int j = 0; j < divisor; j++)
            {
                cin >> name;
                for(int k = 0; k < size; k++)
                    if(names.at(k) == name){
                        money[k] += gift;
                        break;
                    }
            }
        }

        if(counter != 0)
            cout << endl;
        counter++;

        for(int i = 0; i < size; i++)
            cout << names.at(i) << " " << money[i] << endl;
    }
    return 0;
}
