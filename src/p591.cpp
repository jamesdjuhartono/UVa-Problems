#include <iostream>

using namespace std;

int main()
{
    int size, sum, ans, target;
    int counter;
    int array[51];

    cin >> size;
    counter = 1;

    while(size != 0)
    {
        sum = 0;
        ans = 0;
        for(int i = 0; i < size; i++)
        {
            cin >> array[i];
            sum += array[i];
        }
        target = sum/size;

        for(int i = 0; i < size; i++)
            if(array[i] < target)
                ans += target - array[i];

        cout << "Set #" << counter << endl;
        cout << "The minimum number of moves is " << ans << "." << endl << endl;
        cin >> size;

        counter++;
    }

    return 0;
}
