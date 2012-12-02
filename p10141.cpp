#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numReq, numP, currReq, optReq, counter = 1;
    string dummy, best_p, p;
    double price, min_price;

    cin >> numReq >> numP;

    while(numReq != 0 || numP != 0)
    {
        optReq = 0;
        min_price = 100000000.00;
        for(int i = 0; i <= numReq; i++)    getline(cin,dummy);

        for(int i = 0; i < numP; i++)
        {
            getline(cin,p);
            cin >> price >> currReq;
            for(int j = 0; j <= currReq; j++)   getline(cin,dummy);
            if(currReq > optReq)
            {
                optReq = currReq;
                best_p = p;
                min_price = price;
            }
            else if(currReq == optReq && price < min_price)
            {
                best_p = p;
                min_price = price;
            }
        }
        cout << "RFP #" << counter++ << endl;
        cout << best_p << endl;
        cin >> numReq >> numP;
        if(numReq != 0 || numP != 0)
            cout << endl;
    }
    return 0;
}
