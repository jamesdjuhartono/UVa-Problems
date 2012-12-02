#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int numCase, age;
    int currDay, currMonth, currYear, birthDay, birthMonth, birthYear;

    scanf("%d",&numCase);

    for(int i = 1; i <= numCase; i++)
    {
        scanf("%d/%d/%d",&currDay,&currMonth,&currYear);
        scanf("%d/%d/%d",&birthDay,&birthMonth,&birthYear);

        cout << "Case #" << i << ": ";

        if((currYear < birthYear) ||
           (currYear == birthYear && currMonth < birthMonth) ||
           (currYear == birthYear && currMonth == birthMonth && currDay < birthDay))
            cout << "Invalid birth date" << endl;
        else
        {
            if((currMonth < birthMonth) || (currMonth == birthMonth && currDay < birthDay))
                age = currYear - birthYear - 1;
            else
                age = currYear - birthYear;

            if(age > 130)
                cout << "Check birth date" << endl;
            else
                cout << age << endl;
        }
    }

    return 0;
}
