#include <iostream>
#include <cstdio>
#include <cstring>

#define MAX_SIZE 500

using namespace std;

int main()
{
    int width, height, n, temp;
    int x1, y1, x2, y2;
    int seat;
    bool field[MAX_SIZE][MAX_SIZE];

    cin >> width >> height >> n;

    while(width != 0 || height != 0 || n != 0)
    {
        memset(field,false,sizeof field);
        seat = width*height;

        for(int i = 0; i < n; i++)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            if(x1 > x2)
            {
                temp = x1;
                x1 = x2;
                x2 = temp;
            }

            if(y1 > y2)
            {
                temp = y1;
                y1 = y2;
                y2 = temp;
            }

            for(int j = x1; j <= x2; j++)
                for(int k = y1; k <= y2; k++)
                    if(!field[j][k]){
                        field[j][k] = true;
                        seat--;
                    }
        }
        if(seat == 0)       cout << "There is no empty spots." << endl;
        else if(seat == 1)  cout << "There is one empty spot." << endl;
        else                cout << "There are " << seat << " empty spots." << endl;

        cin >> width >> height >> n;
    }

    return 0;
}
