#include <iostream>
#include <cstring>

using namespace std;

bool p[1000010];
int prime[900000],totalPrime = 0;
bool people[3510];

void sieve() {
     int i,j;
     memset(p,1,sizeof(p));
     p[0]=p[1]=0;
     for (i=2;i<=1000;) {
         for ( j=i+i;j<=1000000;j+=i )
             p[j] = 0;
         for ( i++;!p[i];i++ );
     }
     for (i=0;i<1000000;i++)
         if ( p[i] )
            prime[totalPrime++] = i;
}

void Joseph(int n) {
     memset(people,0,sizeof(people));
     int i,j,k,nn=n;
     int indexPrime = 0;
     i=1;
     while (n>1) {
           n--;
           j=0;

           while (j<prime[indexPrime]) {
                 if (i>nn) i=1;
                 if (people[i]==0) j++;
                 i++;
           }
           indexPrime++;
           people[i-1] = 1;

     }
     for (k=1;k<=nn;k++)
         if (people[k]==0)
         {
            cout<<k<<endl;
            return ;
         }
}

int  main()
{
     sieve();
     int n;
     while ( cin>>n && n )
           Joseph(n);
    return 0;
}
