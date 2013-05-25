#include <stdio.h>

using namespace std;

int main()
{
    double NCOWS, NCARS, NSHOW;

    while (scanf("%lf%lf%lf", &NCOWS, &NCARS, &NSHOW) != EOF)
        printf("%.5lf\n", (NCOWS*NCARS+NCARS*NCARS-NCARS)/(NCOWS+NCARS)/(NCOWS+NCARS-NSHOW-1));

    return 0;
}
