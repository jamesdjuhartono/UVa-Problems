#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int numHeads, numKnights, cost, knight_counter, slain;
    bool safe;
    int *diameters, *heights;

    while(cin >> numHeads >> numKnights)
    {
        if(numHeads == 0 && numKnights == 0)    break;

        diameters = new int[numHeads];
        heights = new int[numKnights];

        cost = 0;
        knight_counter = 0;
        slain = 0;

        for(int i = 0; i < numHeads; i++)
            cin >> diameters[i];
        for(int i = 0; i < numKnights; i++)
            cin >> heights[i];

        sort(diameters,diameters+numHeads);
        sort(heights,heights+numKnights);

        if(numHeads > numKnights)   cout << "Loowater is doomed!" << endl;
        else
        {
            for(int i = 0; i < numHeads; i++)
            {
                if(knight_counter < numKnights && diameters[i] <= heights[knight_counter]){
                    cost += heights[knight_counter];
                    knight_counter++;
                    slain++;
                }
                else if(knight_counter == numKnights)
                    break;
                else
                {
                    i--;
                    knight_counter++;
                }
            }
            if(slain < numHeads)    cout << "Loowater is doomed!" << endl;
            else                    cout << cost << endl;
        }
    }

    return 0;
}
