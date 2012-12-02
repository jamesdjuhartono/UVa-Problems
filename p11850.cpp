#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int numStations;
    int* arr;
    bool ok;

    cin >> numStations;
    while(numStations != 0)
    {
        ok = true;
        arr = new int[numStations+1];
        for(int i = 0; i < numStations; i++)
            cin >> arr[i];

        arr[numStations] = 1422;

        sort(arr,arr+numStations+1);
        for(int i = 1; i < numStations; i++)
            if(arr[i] - arr[i-1] > 200){
                ok = false;
                break;
            }

        if(2*(arr[numStations] - arr[numStations-1]) > 200)
            ok = false;

        if(ok)  cout << "POSSIBLE" << endl;
        else    cout << "IMPOSSIBLE" << endl;
        cin >> numStations;
    }
    return 0;
}
