#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    int numCase = 1, size;
    ll curr, max;
    int arr[20];
    //bool first = true;

    while(cin >> size)
    {
        //if(!first)  cout << endl;
        //else        first = false;
        max = 0;
        for(int i = 0; i < size; i++)
            cin >> arr[i];

        for(int i = 0; i < size; i++)
        {
            for(int j = i; j < size; j++)
            {
                curr = 1;
                for(int k = i; k <= j; k++)
                    curr *= arr[k];

                if(curr > max)  max = curr;
             }
        }
        cout << "Case #" << numCase++ << ": The maximum product is " << max << "." << endl << endl;
    }

    return 0;
}
