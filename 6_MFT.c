#include<stdio.h>

int main()
{
	int n,i,m,l,w,s,a[10],t=0;
	printf("Enter the total Memory (in Bytes) -- ");
	scanf("%d",&n);
	printf("Enter the Block size(in Bytes) -- ");
	scanf("%d",&m);
	printf("Enter the number of processes -- ");
	scanf("%d",&s);
	l=n/m;
	w=n-l*m;
	int p=0;
	for(i=0;i<s;i++)
	{
		printf("Enter memory  for process %d (in Bytes)-- ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nNo. of Blocks available in memory -- %d",l);
	printf("\nProcess\tMemoryofprocess \tAllocated\tInternalFragmentation");
	for(i=0;i<s && p<l;i++)
	{
		printf("\n %d\t \t%d",i+1,a[i]);
		if(a[i]>m)
			printf("\t\tNO\t\t---");
		else
		{
			printf("\t\tYES\t%d",m-a[i]);
			t = t + m-a[i];
			p++;
		}
	}
	if(i<s)
		printf("\nNo Memory Left for Processes!!!! Memory Full");
	printf("\n\nTotal Internal Fragmentation is %d",t);
	printf("\nTotal External Fragmentation is %d",w);
	return(0);
}
