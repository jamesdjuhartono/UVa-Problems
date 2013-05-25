#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int hour, min;
    double angle_hour, angle_min, disp, final_angle;

    while(scanf("%d:%d",&hour,&min) == 2 && (hour != 0 || min != 0))
    {
        angle_hour = (double)hour/12*360;
        if(angle_hour == 360) angle_hour = 0;

        angle_min = (double)min/60*360;

        disp = (double)min/2;

        if(angle_hour >= angle_min)
            final_angle = angle_hour - angle_min + disp;
        else if(angle_hour < angle_min)
            final_angle = angle_min - angle_hour - disp;

        if(final_angle > 180)
            final_angle = 360 - final_angle;

        if(final_angle < 0)
            final_angle *= -1;

        printf("%.3lf\n",final_angle);
    }

    return 0;
}
