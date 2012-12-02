#include <iostream>

using namespace std;

int main()
{
    int year;
    bool special;

    while(cin >> year)
    {
        special = false;

        if((year%4 == 0 && year%100 != 0) || (year%400 == 0)){
            cout << "This is leap year." << endl;
            special = true;
        }

        if(year%15 == 0){
            cout << "This is huluculu festival year." << endl;
            special = true;
        }

        if(((year%4 == 0 && year%100 != 0) || (year%400 == 0)) && year%55 == 0){
            cout << "This is bulukulu festival year." << endl;
            special = true;
        }

        if(!special)
            cout << "This is an ordinary year." << endl;

        cout << endl;
    }

    return 0;
}
