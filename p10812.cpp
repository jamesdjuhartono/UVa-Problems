#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int numCase, sum, diff;
    int x, y;
    bool found;

    cin >> numCase;
    for(int i = 0; i < numCase; i++)
    {
        found = false;
        cin >> sum >> diff;

        if(sum < diff || (sum%2 == 0 && diff%2 != 0) || (sum%2 != 0 && diff%2 == 0))
            printf("impossible\n");
        else
            printf("%d %d\n",(sum+diff)/2, (sum-diff)/2);
    }
    return 0;
}
