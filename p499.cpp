#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int array[52];
    int max;

    while(getline(cin,input))
    {
        max = 0;
        for(int i = 0; i < 52; i++)
            array[i] = 0;
        for(int i = 0; i < input.length(); i++)
        {
            if(input.at(i) <= 90 && input.at(i) >= 65)
                array[input.at(i)-65]++;
            else if(input.at(i) <= 122 && input.at(i) >= 97)
                array[input.at(i)-71]++;
        }
        for(int i = 0; i < 52; i++)
            if(array[i] > max)
                max = array[i];
        for(int i = 0; i < 52; i++)
        {
            if(array[i] == max && i < 26)
                cout << (char)(i+65);
            else if(array[i] == max && i > 25)
                cout << (char)(i+71);
        }
        cout << " " << max <<endl;
    }

    return 0;
}
