#include <iostream>

using namespace std;

int main()
{
    int arr[101][101];
    int size, subRect,maxSubRect = -127*100*100;

    cin >> size;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cin >> arr[i][j];
            if(i > 0)   arr[i][j] += arr[i-1][j];
            if(j > 0)   arr[i][j] += arr[i][j-1];
            if(i > 0 && j > 0)  arr[i][j] -= arr[i-1][j-1];
        }
    }

    for(int i = 0; i < size; i++)  for(int j = 0; j < size; j++)    //start coordinate
        for(int k = i; k < size; k++)   for(int l = j; l < size; l++){   //end coordinate
            subRect = arr[k][l];
            if(i > 0)   subRect -= arr[i-1][l];
            if(j > 0)   subRect -= arr[k][j-1];
            if(i > 0 && j > 0)  subRect += arr[i-1][j-1];

            if(subRect > maxSubRect)    maxSubRect = subRect;
        }

    cout << maxSubRect << endl;
    return 0;
}
