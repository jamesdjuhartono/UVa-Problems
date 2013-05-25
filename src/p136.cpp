#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int last2 = 0;
    int last3 = 0;
    int last5 = 0;
    long prev, candidate1, candidate2, candidate3;

    long int result[1500];
    result[0] = 1;
    for (int i = 1; i < 1500; ++i)
    {
        long prev = result[i - 1];

        while (result[last2] * 2 <= prev) {
            ++last2;
        }
        while (result[last3] * 3 <= prev) {
            ++last3;
        }
        while (result[last5] * 5 <= prev) {
            ++last5;
        }

        candidate1 = result[last2] * 2;
        candidate2 = result[last3] * 3;
        candidate3 = result[last5] * 5;

        result[i] = min(candidate1, min(candidate2, candidate3));
    }
    cout << result[1499];
}
