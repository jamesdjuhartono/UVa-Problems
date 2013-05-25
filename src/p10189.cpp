#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, y, count, num;
    char field[100][100];
    char output[100][100];
    string input;

    cin >> x >> y;
    num = 0;
    while(x != 0 && x != 0)
    {
        num++;
        for(int i = 0; i < x; i++)
        {
            cin >> input;
            for(int j = 0; j < input.length(); j++)
                field[i][j] = input.at(j);
        }

        for(int i = 0; i < x; i++)
        {
            for(int j = 0; j < y; j++)
            {
                count = 0;
                if(field[i][j] == '*')
                    output[i][j] = '*';
                else
                {
                    for(int k = i-1; k <= i+1; k++)
                        for(int l = j-1; l <= j+1; l++)
                            if((k != i || l != j) && k >= 0 && k < x && l >= 0 && l < y && field[k][l] == '*')
                                count++;
                    output[i][j] = (char) (count+48);
                }
            }
        }
        cout << "Field #" << num << ":" << endl;
        for(int i = 0; i < x; i++)
        {
            for(int j = 0; j < y; j++)
                cout << output[i][j];
            cout << endl;
        }
        cin >> x >> y;
        if(x != 0 && y!= 0)
            cout << endl;
    }
    return 0;
}
