#include <iostream>
using namespace std;

int main()
{
    int numCase;
    int array[10];
    bool check;

    cin >> numCase;
    cout << "Lumberjacks:" << endl;
    for(int i = 0; i < numCase; i++)
    {
        check = true;
        for(int j = 0; j < 10; j++)
            cin >> array[j];

        if(array[1] > array[0])
        {
            for(int j = 1; j < 9; j++)
                if(array[j] > array[j+1])
                    check = false;

        }
        else
        {
            for(int j = 1; j < 9; j++)
                if(array[j] < array[j+1])
                    check = false;
        }
        if(check)
            cout << "Ordered" << endl;
        else
            cout << "Unordered" << endl;
    }
    return 0;
}
