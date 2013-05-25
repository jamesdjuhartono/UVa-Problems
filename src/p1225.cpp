#include <iostream>

using namespace std;

int main()
{
    int numCase, input, temp;
    int count_0, count_1, count_2, count_3, count_4, count_5, count_6, count_7, count_8, count_9;
    int array[10000][10];

    for(int i = 0; i < 10000; i++)
    {
        array[i][0] = 0; array[i][1] = 0; array[i][2] = 0; array[i][3] = 0; array[i][4] = 0;
        array[i][5] = 0; array[i][6] = 0; array[i][7] = 0; array[i][8] = 0; array[i][9] = 0;
    }
    for(int i = 0; i < 10000; i++)
    {
        temp = i;
        while(temp > 0)
        {
            array[i][temp%10]++;
            temp /= 10;
        }
    }

    cin >> numCase;

    for(int i = 0; i < numCase; i++)
    {
        cin >> input;
        count_0 = 0;
        count_1 = 0;
        count_2 = 0;
        count_3 = 0;
        count_4 = 0;
        count_5 = 0;
        count_6 = 0;
        count_7 = 0;
        count_8 = 0;
        count_9 = 0;

        for(int j = 1; j <= input; j++)
        {
            count_0 += array[j][0];
            count_1 += array[j][1];
            count_2 += array[j][2];
            count_3 += array[j][3];
            count_4 += array[j][4];
            count_5 += array[j][5];
            count_6 += array[j][6];
            count_7 += array[j][7];
            count_8 += array[j][8];
            count_9 += array[j][9];
        }
        cout << count_0 << " " << count_1 << " " << count_2 << " " << count_3 << " " << count_4 << " " << count_5 << " " << count_6 << " " << count_7 << " " << count_8 << " " << count_9 << endl;
    }

    return 0;
}
