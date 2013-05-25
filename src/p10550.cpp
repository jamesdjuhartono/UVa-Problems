#include <iostream>

using namespace std;

int main()
{
    int curr, num1, num2, num3;
    int deg;

    cin >> curr >> num1 >> num2 >> num3;

    while(curr != 0 || num1 != 0 || num2 != 0 || num3 != 0)
    {
        deg = 3*360;

        if(num1 > curr) deg += (40 - num1 + curr)*9;
        else            deg += (curr - num1)*9;

        curr = num1;

        if(num2 < curr) deg += (40 - curr + num2)*9;
        else            deg += (num2 - curr)*9;

        curr = num2;

        if(num3 > curr) deg += (40 - num3 + curr)*9;
        else            deg += (curr - num3)*9;

        cout << deg << endl;

        cin >> curr >> num1 >> num2 >> num3;
    }

    return 0;
}
