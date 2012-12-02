#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int numCase;
    int amt, part1, part2, part3, part4, part5;
    double tax;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        tax = 0;
        part1 = 0;
        part2 = 0;
        part3 = 0;
        part4 = 0;
        part5 = 0;
        cin >> amt;

        if(amt <= 180000)
            part1 = amt;
        else
            part1 = 180000;
        if(amt - part1 > 0 && amt - part1 <= 300000)
            part2 = amt - part1;
        else if(amt - part1 > 0)
            part2 = 300000;
        if(amt - part1 - part2 > 0 && amt - part1 - part2 <= 400000)
            part3 = amt - part1 - part2;
        else if(amt - part1 - part2 > 0)
            part3 = 400000;
        if(amt - part1 - part2 - part3 > 0 && amt - part1 - part2 - part3 <= 300000)
            part4 = amt - part1 - part2 - part3;
        else if(amt - part1 - part2 - part3 > 0)
            part4 = 300000;
        if(amt - part1 - part2 - part3 - part4 > 0)
            part5 = amt - part1 - part2 - part3 - part4;

        tax = 0.1*part2 + 0.15*part3 + 0.2*part4 + 0.25*part5;
        if(tax > 0 && tax < 2000)
            tax = 2000;
        cout << "Case " << i+1 << ": " << (int)ceil(tax) << endl;
    }
    return 0;
}
