#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input, output;
    char check;
    int flag = 0;

    while(getline(cin,input))
    {
        output = "";
        for(int i = 0; i < input.length(); i++)
        {
            check = input.at(i);
            if(check == 34 && flag == 0)
            {
                flag = 1;
                output += "``";
            }
            else if(check == 34 && flag == 1)
            {
                output += "''";
                flag = 0;
            }
            else
                output += check;

        }
        cout << output << endl;
    }

    return 0;
}
