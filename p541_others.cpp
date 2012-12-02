#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

typedef unsigned long long ULL;
typedef long long LL;

int main() {
    int N;
    while(cin >> N && N) {
        bool M[101][101];
        int rctr=0, rcrpt=0;
        int cctr=0, ccrpt=0;
        bool corrupted=false;

        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++)
                cin >> M[i][j];
        }

        //check row
        for(int i=0; i<N; i++) {
            int sum=0;

            for(int j=0; j<N; j++)
                sum += M[i][j];

            if ( sum % 2 != 0) {
                rctr++;
                rcrpt = i;
            }

            if (rctr > 1) {
                corrupted = true;
                break;
            }
        }

        //check column
        for(int i=0; i<N; i++) {
            int sum = 0;

            for(int j=0; j<N; j++)
                sum += M[j][i];

            if (sum % 2 != 0) {
                cctr++;
                ccrpt = i;
            }

            if (cctr > 1) {
                corrupted = true;
                break;
            }
        }

        if (corrupted)
            cout << "Corrupt" << endl;
        else {
            if (!cctr && !rctr)
                cout << "OK" << endl;
            else
                cout << "Change bit (" << rcrpt+1 << "," << ccrpt+1 << ")" << endl;
        }
     }

    return 0;
}
