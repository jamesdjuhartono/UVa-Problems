#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    int numCase;
    int index;
    string input;
    char ch, dummy;
    int count[10];
    bool current_finger[10];
    bool required[14][10] = {{false,true,true,true,false,false,true,true,true,true},
                             {false,true,true,true,false,false,true,true,true,false},
                             {false,true,true,true,false,false,true,true,false,false},
                             {false,true,true,true,false,false,true,false,false,false},
                             {false,true,true,true,false,false,false,false,false,false},
                             {false,true,true,false,false,false,false,false,false,false},
                             {false,true,false,false,false,false,false,false,false,false},
                             {false,false,true,false,false,false,false,false,false,false},
                             {true,true,true,true,false,false,true,true,true,false},
                             {true,true,true,true,false,false,true,true,false,false},
                             {true,true,true,true,false,false,true,false,false,false},
                             {true,true,true,true,false,false,false,false,false,false},
                             {true,true,true,false,false,false,false,false,false,false},
                             {true,true,false,false,false,false,false,false,false,false}};


    scanf("%d",&numCase);
    gets(&dummy);

    for(int i = 0; i < numCase; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            current_finger[j] = false;
            count[j] = 0;
        }
        getline(cin,input);

        for(int j = 0; j < input.length(); j++)
        {
            ch = input.at(j);
            if(ch == 'c')       index = 0;
            else if(ch == 'd')  index = 1;
            else if(ch == 'e')  index = 2;
            else if(ch == 'f')  index = 3;
            else if(ch == 'g')  index = 4;
            else if(ch == 'a')  index = 5;
            else if(ch == 'b')  index = 6;
            else if(ch == 'C')  index = 7;
            else if(ch == 'D')  index = 8;
            else if(ch == 'E')  index = 9;
            else if(ch == 'F')  index = 10;
            else if(ch == 'G')  index = 11;
            else if(ch == 'A')  index = 12;
            else if(ch == 'B')  index = 13;

            for(int k = 0; k < 10; k++)
            {
                if(!current_finger[k] && required[index][k])
                {
                    count[k]++;
                    current_finger[k] = true;
                }
                else if(current_finger[k] && !required[index][k])
                    current_finger[k] = false;
            }
        }
        for(int j = 0; j < 9; j++)
            cout << count[j] << " ";
        cout << count[9] << endl;
    }
    return 0;
}
