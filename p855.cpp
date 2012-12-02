#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int numCase, numFriends;
    int *streets, *av;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        cin >> numFriends >> numFriends >> numFriends;
        streets = new int[numFriends];
        av = new int[numFriends];

        for(int j = 0; j < numFriends; j++)
            cin >> streets[j] >> av[j];

        sort(streets,streets+numFriends);
        sort(av,av+numFriends);

        if(numFriends%2 == 0)
            cout << "(Street: " << streets[(numFriends-1)/2] << ", Avenue: " << av[(numFriends-1)/2] << ")" << endl;
        else
            cout << "(Street: " << streets[numFriends/2] << ", Avenue: " << av[numFriends/2] << ")" << endl;
    }

    return 0;
}
