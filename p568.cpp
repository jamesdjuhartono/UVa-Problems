#include <stdio.h>

using namespace std;

int n, last_digit[10001] ;

void precomp()
{
   int i, fact;

   last_digit[0] = last_digit[1] = fact = 1;

   for (i = 2; i <= 10000; i++)
   {
      fact = fact * i;
      while (fact%10==0)
         fact /= 10 ;
      fact = fact%100000 ;
      last_digit[i] = fact%10 ;
   }
}

int main()
{
   precomp();
   while (scanf("%d", &n) != EOF)
      printf("%5d -> %d\n", n, last_digit[n]) ;

   return 0;
}
