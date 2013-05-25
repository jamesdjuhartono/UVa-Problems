#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long size[7];
    long extra_ones, extra_twos, ans;

    while(cin >> size[1] >> size[2] >> size[3] >> size[4] >> size[5] >> size[6])
    {
        if(!size[1] && !size[2] && !size[3] && !size[4] && !size[5] && !size[6])    break;

        extra_ones = 0;
        extra_twos = 0;

        //only 1 box of 6x6 fit in a 6x6 package.
        ans = size[6];

        //for each 5x5 box, we can fit in 11 1x1 box.
        ans += size[5];
        extra_ones += 11*size[5];

        //for each 4x4 box, we can fit maximum of 5 2x2 boxes, or 20 1x1 boxes.
        ans += size[4];
        extra_twos += 5*size[4];

        //we can fit 4 3x3 boxes in a 6x6 package.
        ans += ceil((double)size[3]/(double)4);
        if(size[3]%4 == 1){
            extra_twos += 5;
            extra_ones += 7;
        }
        else if(size[3]%4 == 2){
            extra_twos += 3;
            extra_ones += 6;
        }
        else if(size[3]%4 == 3){
            extra_twos += 1;
            extra_ones += 5;
        }

        //for the 2x2 boxes, we try to fit in the extras
        if(size[2] < extra_twos)
            extra_ones += 4*(extra_twos - size[2]);
        else if(size[2] > extra_twos){
            ans += ceil(((double)size[2] - (double)extra_twos)/(double)9);
            extra_ones += 4*(9 - (size[2] - extra_twos)%9);
        }

        //for the 1x1 boxes, we try to fit in the extras
        if(size[1] > extra_ones)
            ans += ceil(((double)size[1] - (double)extra_ones)/(double)36);

        cout << ans << endl;
    }
    return 0;
}
