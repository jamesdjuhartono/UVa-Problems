#include <iostream>

using namespace std;

long long count = 0;

void merge(long long a[], int i, int mid, int j)
{
    long long* temp = new long long[j-i+1];
    int left = i, right = mid+1, it = 0;

    while (left <= mid && right <= j)
    {
        if (a[left] <= a[right])
            temp[it++] = a[left++];
        else
        {
            temp[it++] = a[right++];
            count += mid - left + 1;
        }
        //cout << "im here" << endl;
    }
    while (left <= mid) temp[it++] = a[left++];
    while (right <= j)  temp[it++] = a[right++];

    for (int k = 0; k < j-i+1; k++)
        a[i+k] = temp[k];
}

void mergeSort(long long a[], int i, int j)
{
    if (i < j)
    {
        int mid = (i+j)/2;
        mergeSort(a, i, mid);
        mergeSort(a, mid+1, j);
        merge(a,i,mid,j);
    }
}

int main()
{
    int size;
    long long* arr;

    cin >> size;
    while(size != 0)
    {
        arr = new long long[size];
        count = 0;
        for(int i = 0; i < size; i++)
            cin >> arr[i];

        mergeSort(arr,0,size-1);
        cout << count << endl;

        //for(int i = 0; i < size; i++)
            //cout << arr[i] << " ";

        cin >> size;
    }

    return 0;
}
