#include <iostream>
#include <string>

using namespace std;

int maxRow, maxCol;
int x, y, next_x, next_y;
char orientation;
string cmd;
bool lost;
bool scent[55][55];

int main()
{
    for(int i = 0; i < 55; i++)
        for(int j = 0; j < 55; j++)
            scent[i][j] = false;

    cin >> maxCol >> maxRow;

    while(cin >> x >> y >> orientation)
    {
        lost = false;
        if(orientation == 'N')
        {
            next_x = x;
            next_y = y+1;
        }
        else if(orientation == 'S')
        {
            next_x = x;
            next_y = y-1;
        }
        else if(orientation == 'E')
        {
            next_x = x+1;
            next_y = y;
        }
        else
        {
            next_x = x-1;
            next_y = y;
        }
        cin >> cmd;
        for(int i = 0; i < cmd.length(); i++)
        {
            //cout << x << " " << y << " " << orientation << endl;
            if(cmd[i] == 'F' && !scent[x][y] && !lost)
            {
                if(next_x > maxCol || next_x < 0 || next_y > maxRow || next_y < 0)
                {
                    lost = true;
                    scent[x][y] = true;
                }

                else
                {
                    x = next_x;
                    y = next_y;
                    if(orientation == 'N')  next_y++;
                    else if(orientation == 'S') next_y--;
                    else if(orientation == 'E') next_x++;
                    else  next_x--;
                }
            }

            else if(cmd[i] == 'F' && scent[x][y] && !lost)
            {
                if(next_x <= maxCol && next_x >= 0 && next_y <= maxRow && next_y >= 0)
                {
                    x = next_x;
                    y = next_y;
                    if(orientation == 'N')  next_y++;
                    else if(orientation == 'S') next_y--;
                    else if(orientation == 'E') next_x++;
                    else  next_x--;
                }
            }

            else if(cmd[i] == 'R')
            {
                if(orientation == 'N')
                {
                    orientation = 'E';
                    next_x = x+1;
                    next_y = y;
                }
                else if(orientation == 'S')
                {
                    orientation = 'W';
                    next_x = x-1;
                    next_y = y;
                }
                else if(orientation == 'E')
                {
                    orientation = 'S';
                    next_x = x;
                    next_y = y-1;
                }
                else
                {
                    orientation = 'N';
                    next_x = x;
                    next_y = y+1;
                }
            }

            else if(cmd[i] == 'L')
            {
                if(orientation == 'N')
                {
                    orientation = 'W';
                    next_x = x-1;
                    next_y = y;
                }
                else if(orientation == 'S')
                {
                    orientation = 'E';
                    next_x = x+1;
                    next_y = y;
                }
                else if(orientation == 'E')
                {
                    orientation = 'N';
                    next_x = x;
                    next_y = y+1;
                }
                else
                {
                    orientation = 'S';
                    next_x = x;
                    next_y = y-1;
                }
            }
        }
        cout << x << " " << y << " " << orientation;
        if(lost)    cout << " LOST" << endl;
        else        cout << endl;
    }

    return 0;
}
