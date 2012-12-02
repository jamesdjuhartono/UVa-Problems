#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numRoll, top, north, west, east, south, bot;
    int temp;
    string input;

    cin >> numRoll;

    while(numRoll != 0)
    {
        top = 1;
        north = 2;
        south = 5;
        east = 4;
        west = 3;
        bot = 6;

        for(int i = 0; i < numRoll; i++)
        {
            cin >> input;
            if(input == "north")
            {
                temp = top;
                top = south;
                south = bot;
                bot = north;
                north = temp;
            }
            else if(input == "south")
            {
                temp = top;
                top = north;
                north = bot;
                bot = south;
                south = temp;
            }
            else if(input == "east")
            {
                temp = top;
                top = west;
                west = bot;
                bot = east;
                east = temp;
            }
            else if(input == "west")
            {
                temp = top;
                top = east;
                east = bot;
                bot = west;
                west = temp;
            }
        }

        cout << top << endl;
        cin >> numRoll;
    }

    return 0;
}
