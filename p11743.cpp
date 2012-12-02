#include <iostream>

using namespace std;

int main()
{
    int numCase, sum, digit1, digit2, digit3, digit4;
    int dummy;

    cin >> numCase;

    for(int i = 0; i < numCase; i++)
    {
        sum = 0;
        for(int j = 0; j < 4; j++)
        {
            cin >> dummy;
            digit1 = 2*(dummy/1000);
            digit2 = (dummy/100)%10;
            digit3 = 2*((dummy/10)%10);
            digit4 = dummy%10;

            digit1 = digit1%10 + digit1/10;
            digit3 = digit3%10 + digit3/10;
            //cout << digit1 << " " << digit2 << " " << digit3 << " " << digit4 << endl;
            sum += digit1 + digit2 + digit3 + digit4;
        }
        //cout << sum << endl;
        if(sum % 10 == 0)
            cout << "Valid" << endl;
        else
            cout << "Invalid" << endl;
    }
    return 0;
}
