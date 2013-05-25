#include <iostream>
using namespace std;

int main()
{
    int numDevice, numOp, maxCap, currCap, max, inp, seq;
    bool blown;
    int cap[21];
    bool _switch[21];

    seq = 1;
    cin >> numDevice >> numOp >> maxCap;

    while(numDevice != 0 || numOp !=0 || maxCap != 0)
    {
        currCap = 0;
        max = 0;
        blown = false;
        for(int i = 0; i < 21; i++)
            _switch[i] = false;
        for(int i = 0; i < numDevice; i++)
            cin >> cap[i+1];
        for(int i = 0; i < numOp; i++)
        {
            cin >> inp;
            if(!_switch[inp])
            {
                _switch[inp] = true;
                currCap += cap[inp];
            }
            else if(_switch[inp])
            {
                _switch[inp] = false;
                currCap -= cap[inp];
            }
            if(currCap > max)
                max = currCap;
            if(currCap > maxCap)
                blown = true;
        }
        cout << "Sequence " << seq << endl;
        seq++;
        if(!blown)
            cout << "Fuse was not blown." << endl << "Maximal power consumption was " << max << " amperes." << endl << endl;
        else
            cout << "Fuse was blown." << endl << endl;

        cin >> numDevice >> numOp >> maxCap;
    }

    return 0;
}
