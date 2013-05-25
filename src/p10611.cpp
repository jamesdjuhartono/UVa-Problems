#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int n,i,q,cq;
	int ladychimps[50001];
	scanf("%d",&n);

	for(i = 0; i < n; i++)
		scanf("%d",ladychimps+i);

	scanf("%d",&q);
	while(q--)
	{
		scanf("%d",&cq);
		cq--;
	 	int hi = n-1;
	 	int lo = 0;
		int mid;

		while(hi-lo > 1)
		{
			mid = (lo + hi)/ 2;
			if(ladychimps[mid] > cq)
				hi = mid;
			else if(ladychimps[mid] < cq)
				lo = mid;
			else
			{
				hi = mid;
				break;
			}
		}
		if(ladychimps[hi] <= cq)
			printf("%d ",ladychimps[hi]);
		else if(ladychimps[lo] <= cq)
			printf("%d ",ladychimps[lo]);
		else
			printf("X ");
		cq += 2;
		hi = n-1;
		lo = 0;
		while(hi-lo > 1)
		{
			mid = (lo + hi) / 2;
			if(ladychimps[mid] > cq)
				hi = mid;
			else if(ladychimps[mid] < cq)
				lo = mid;
			else
			{
				lo = mid;
				break;
			}
		}
		if(ladychimps[lo] >= cq)
			printf("%d\n",ladychimps[lo]);
		else if(ladychimps[hi] >= cq)
			printf("%d\n",ladychimps[hi]);
		else
			printf("X\n");
	}
	return 0;
}
