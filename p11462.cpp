#include <stdio.h>
#include <stdlib.h>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
    int* arr;
    int size;

    scanf("%d",&size);
    while(size != 0)
    {
        arr = new int[size];
        for(int i = 0; i < size; i++)
            scanf("%d",&arr[i]);

        qsort (arr, size, sizeof(int), compare);
        for(int i = 0; i < size-1; i++)
            printf("%d ",arr[i]);

        printf("%d\n",arr[size-1]);
        scanf("%d",&size);
    }

    return 0;
}
