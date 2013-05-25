#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numCase, temp, memo;
    string cmd;

    cin >> numCase;
    memo = 0;
    for(int i = 0; i < numCase; i++)
    {
        cin >> cmd;
        if(cmd == "donate"){
            cin >> temp;
            memo += temp;
        }
        else
            cout << memo << endl;
    }

    return 0;
}
