#include <iostream>

using namespace std;

int main()
{
    int numCase, numP, curr, pass;

    cin >> numCase;
    for(int i = 1; i <= numCase; i++)
    {
        cin >> numP >> curr >> pass;
        while(pass != 0)
        {
            curr++;
            if(curr > numP)
                curr = 1;

            pass--;
        }
        cout << "Case " << i << ": " << curr << endl;
    }

    return 0;
}
