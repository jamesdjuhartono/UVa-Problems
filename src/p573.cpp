#include <iostream>

using namespace std;

int main()
{
    int height, climb, slide, fatigue;
    double current_pos, current_climb, lost_climb;
    int day_counter;
    bool go;

    cin >> height >> climb >> slide >> fatigue;
    while(height != 0)
    {
        day_counter = 1;
        current_climb = climb;
        lost_climb = (double)fatigue/100*(double)climb;
        current_pos = 0;
        go = true;

        while(go)
        {
            if(current_climb > 0)
            {
                current_pos += current_climb;
                current_climb -= lost_climb;
            }
            if(current_pos > height)
                break;
            else
                current_pos -= slide;

            if(current_pos < 0)
                break;

            day_counter++;
        }

        if(current_pos > height)
            cout << "success on day " << day_counter << endl;
        else
            cout << "failure on day " << day_counter << endl;

        cin >> height >> climb >> slide >> fatigue;
    }
    return 0;
}
