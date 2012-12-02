#include <iostream>

using namespace std;

int main()
{
    int size, a, b, c, d, e, f;
    int arr[14];
    bool first = true;

    while(cin >> size && size)
    {
        if(!first)  cout << endl;
        else        first = false;

        for(int i = 0; i < size; i++)
            cin >> arr[i];

        for(a = 0; a < size; a++)
            for(b = a+1; b < size; b++)
                for(c = b+1; c < size; c++)
                    for(d = c+1; d < size; d++)
                        for(e = d+1; e < size; e++)
                            for(f = e+1; f < size; f++)
                                cout << arr[a] << " " << arr[b] << " " << arr[c] << " " << arr[d] << " " << arr[e] << " " << arr[f] << endl;
    }
    return 0;
}
