#include<stdio.h>
int main()
{
	int s,a[10],i, t,n=0;
	printf("Enter the total memory (in Bytes)--");
	scanf("%d",&s);
	t=s;
	i=0,n=0;
	int z=0,c;
	loop:
		printf("Enter memory want to allocate for process %d (in Bytes) -- ",i+1);
		scanf("%d",&a[i]);
		if(a[i]<=t)
		{
			printf("Memory is allocated for Process %d ",i+1);
			t = t - a[i];
			n++,i++;
		}
		else
		{
			printf("\nMemory is Full");
			z=1;
		}
		
		if(z!=1)
		{
		printf("\nDo you want to allocate memory for more processes yes=1 / no=0  -- ");
		scanf("%d", &c);
        }
	if(c==1)
	{   c=0;
		goto loop;
	}
	printf("\n\nTotal Memory We have -- %d", s);
	printf("\n\n\tPROCESS\t\t MEMORY ALLOCATED ");
	for(i=0;i<n;i++)
		{
		printf("\n\t%d\t\t%d",i+1,a[i]);
	 }
	printf("\n\nTotal Memory Allocated is %d",s-t);
	printf("\nTotal External Fragmentation is %d",t);
	return(0);
}
