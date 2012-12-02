#include <iostream>

#define MAX_SIZE 10001

using namespace std;

int main()
{
    int rows, cols, n, caseNum;
    int x, y, rx, ry;
    bool row[MAX_SIZE];
    bool col[MAX_SIZE];
    bool escp;

    cin >> rows >> cols >> n;
    caseNum = 1;
    while(rows != 0 || cols != 0 || n != 0)
    {
        escp = false;

        for(int i = 0; i < MAX_SIZE; i++)
        {
            row[i] = false;
            col[i] = false;
        }

        for(int i = 0; i < n; i++)
        {
            cin >> x >> y;
            row[x] = true;
            col[y] = true;
        }
        cin >> rx >> ry;

        if(rx > 0 && !(row[rx-1] || col[ry]))       escp = true;
        else if(ry > 0 && !(row[rx] || col[ry-1]))  escp = true;
        else if(rx < rows-1 && !(row[rx+1] || col[ry])) escp = true;
        else if(ry < cols-1 && !(row[rx] || col[ry+1])) escp = true;
        else if(!(row[rx] || col[ry]))  escp = true;


        cout << "Case " << caseNum++ << ": ";
        if(escp)    cout << "Escaped again! More 2D grid problems!" << endl;
        else        cout << "Party time! Let's find a restaurant!" << endl;
        cin >> rows >> cols >> n;
    }

    return 0;
}
