#include <iostream>

using namespace std;

int main()
{
    int numCase, size;
    long long matrix[101][101];
    char dummy;
    bool sym;

    cin >> numCase;
    for(int i = 1; i <= numCase; i++)
    {
        sym = true;
        cin >> dummy;
        cin >> dummy >> size;

        for(int j = 0; j < size; j++)
            for(int k = 0; k < size; k++){
                cin >> matrix[j][k];
                if(matrix[j][k] < 0)    sym = false;
            }

        cout << "Test #" << i << ": ";

        for(int j = 0; j < size; j++)
            for(int k = 0; k < size; k++)
                if(matrix[j][k] != matrix[size-j-1][size-k-1]){
                    sym = false;
                    break;
                }

        if(sym) cout << "Symmetric." << endl;
        else    cout << "Non-symmetric." << endl;
    }

    return 0;
}
