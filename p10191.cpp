#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main ()
{
    int day = 1, numMeetings, h1, m1, h2, m2, time1, time2;
    int start, max_time, max_start, curr;
    int time_frame[480];
    string dummy;
    bool rest;

    while(scanf("%d",&numMeetings) != EOF)
    {
        memset(time_frame,0,sizeof time_frame);
        for(int i = 0; i < numMeetings; i++)
        {
            scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
            time1 = 60*h1 + m1;
            time2 = 60*h2 + m2;
            getline(cin,dummy);
            for(int j = time1-600; j < time2-600; j++)
                time_frame[j] = 1;
        }

        max_time = 0;
        max_start = 0;
        curr = 0;
        rest = false;

        for(int i = 0; i < 480; i++)
        {
            if(time_frame[i] == 0 && !rest){
                curr++;
                start = i;
                rest = true;
            }
            else if(time_frame[i] == 0)
                curr++;
            else if(rest && time_frame[i] == 1)
            {
                if(curr > max_time){
                    max_time = curr;
                    max_start = start;
                }
                rest = false;
                curr = 0;
            }
        }

        if(curr > max_time)
        {
            max_time = curr;
            max_start = start;
        }

        if(max_time < 60)
            printf ("Day #%d: the longest nap starts at %d:%.2d and will last for %d minutes.\n",
                    day++, (max_start+600) / 60, (max_start+600) % 60, max_time);
        else
            printf ("Day #%d: the longest nap starts at %d:%.2d and will last for %d hours and %d minutes.\n",
                    day++, (max_start+600) / 60, (max_start+600) % 60, max_time / 60, max_time % 60);
    }

    return 0;
}
