#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int numQ, x, y, counter, caseNum = 1;
    int* arr;
    char ch, prev;

    while(cin >> input)
    {
        arr = new int[input.length()];
        prev = input.at(0);
        counter = 0;
        arr[0] = counter;
        for(int i = 1; i < input.length(); i++)
        {
            ch = input.at(i);
            if(ch == prev)
                arr[i] = counter;
            else
            {
                counter++;
                arr[i] = counter;
            }
            prev = ch;
        }
        cin >> numQ;
        cout << "Case " << caseNum << ":" << endl;
        caseNum++;
        for(int i = 0; i < numQ; i++)
        {
            cin >> x >> y;
            if(arr[x] == arr[y])
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}
