#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    int size, k, m, curr1, curr2;
    int counter1, counter2, left;
    bool* arr;

    cin >> size >> k >> m;

    while(size != 0 || k != 0 || m != 0)
    {
        arr = new bool[size+1];
        memset(arr,false,size+1);

        curr1 = 1;
        curr2 = size;
        left = size;

        while(left > 0)
        {
            counter1 = 0;
            counter2 = 0;
            while(counter1 != k)
            {
                if(curr1 > size)
                    curr1 = 1;
                if(!arr[curr1])
                    counter1++;
                if(counter1 < k)
                    curr1++;
            }
            while(counter2 != m)
            {
                if(curr2 < 1)
                    curr2 = size;
                if(!arr[curr2])
                    counter2++;
                if(counter2 < m)
                    curr2--;
            }

            arr[curr1] = true;
            arr[curr2] = true;

            if(curr1 == curr2)
            {
                printf("%3d",curr1);
                left--;
            }
            else
            {
                printf("%3d%3d",curr1,curr2);
                left -= 2;
            }
            if(left != 0)
                printf(",");
        }
        printf("\n");
        cin >> size >> k >> m;
    }

    return 0;
}
