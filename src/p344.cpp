#include <iostream>

using namespace std;

#define I 0
#define V 1
#define X 2
#define L 3
#define C 4

int main()
{
    int number, temp, counter, num;
    int count_i, count_v, count_x, count_l, count_c;
    int romans[101][5];

    for(int k = 0; k < 101; k++)
    {
        for(int j = 0; j < 5; j++)
            romans[k][j] = 0;
    }

    for(int k = 1; k < 101; k++)
    {
        counter = 1;
        num = k;
        while(num != 0)
        {
            temp = num%10;
            if(counter == 1)//satuan
            {
                if(temp < 4)       {  romans[k][I] += temp;}
                else if(temp == 4) {  romans[k][I] += 1; romans[k][V] += 1;}
                else if(temp == 5) {  romans[k][V] += 1;}
                else if(temp < 9)  {  romans[k][I] += temp-5; romans[k][V] += 1;}
                else if(temp == 9) {  romans[k][I] += 1; romans[k][X] += 1;}
            }
            else if(counter == 2)//puluhan
            {
                if(temp < 4)       {  romans[k][X] += temp;}
                else if(temp == 4) {  romans[k][X] += 1; romans[k][L] += 1;}
                else if(temp == 5) {  romans[k][L] += 1;}
                else if(temp < 9)  {  romans[k][X] += temp-5; romans[k][L] += 1;}
                else if(temp == 9) {  romans[k][X] += 1; romans[k][C] += 1;}
            }
            else if(counter == 3)//ratusan
                romans[k][C] += 1;

            num /= 10;
            counter++;
        }
    }

    /*
    for(int k = 1; k < 101; k++)
    {
        cout << k << ": " << romans[k][I] << " " << romans[k][V] << " " << romans[k][X] << " " << romans[k][L] << " " << romans[k][C] << endl;
    }*/

    cin >> number;
    while(number != 0)
    {
        count_i = 0;
        count_v = 0;
        count_x = 0;
        count_l = 0;
        count_c = 0;

        for(int k = 1; k <= number; k++)
        {
            count_i += romans[k][I];
            count_v += romans[k][V];
            count_x += romans[k][X];
            count_l += romans[k][L];
            count_c += romans[k][C];
        }
        cout << number << ": " << count_i << " i" << ", " << count_v << " v" << ", " << count_x << " x" << ", " << count_l << " l" << ", " << count_c << " c" << endl;
        cin >> number;
    }

    return 0;
}
