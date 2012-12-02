#include <iostream>
#include <limits>
using namespace std;

int main()
{
    long numParticipants, budget, numHotels, numWeeks;
    long price, min, temp;
    int beds[200];

    while(cin >> numParticipants >> budget >> numHotels >> numWeeks)
    {
        min = std::numeric_limits<int>::max();
        for(long i = 0; i < numHotels; i++)
        {
            temp = std::numeric_limits<int>::max();
            cin >> price;
            for(int j = 0; j < numWeeks; j++)
                cin >> beds[j];

            for(int j = 0; j < numWeeks; j++)
            {
                if(beds[j] >= numParticipants)
                {
                    temp = numParticipants*price;
                    break;
                }
            }

            if(temp < min)
                min = temp;
        }
        if(min != std::numeric_limits<int>::max() && min <= budget)
            cout << min << endl;
        else
            cout << "stay home" << endl;
    }
    return 0;
}
