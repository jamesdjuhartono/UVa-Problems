#include <iostream>

#define MAX_SIZE 100001

using namespace std;

int main()
{
    bool cards[2][MAX_SIZE];
    int size1, size2, max, inp;
    int count1, count2;

    cin >> size1 >> size2;
    while(size1 != 0 || size2 != 0)
    {
        max = 0;
        count1 = 0;
        count2 = 0;

        for(int i = 0; i < 2; i++)
            for(int j = 0; j < MAX_SIZE; j++)
                cards[i][j] = false;

        for(int i = 0; i < size1; i++)
        {
            cin >> inp;
            if(inp > max)   max = inp;
            cards[0][inp] = true;
        }

        for(int i = 0; i < size2; i++)
        {
            cin >> inp;
            if(inp > max)   max = inp;
            cards[1][inp] = true;
        }

        for(int i = 0; i <= max; i++)
        {
            if(!cards[0][i] && cards[1][i])         count1++;
            else if(cards[0][i] && !cards[1][i])    count2++;
        }

        if(count1 < count2) cout << count1 << endl;
        else                cout << count2 << endl;

        cin >> size1 >> size2;
    }

    return 0;
}
