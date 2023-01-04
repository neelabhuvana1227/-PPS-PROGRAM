#include<stdio.h>
void main()
{
	int i=1,n,s=0;
	printf("\n give vslue of n=");
	scanf("%d",&n);
	while(n>=i)
	{ 
		s=s+i;
			i++;
	}
	printf("\n sum of %d natural number=%d",n,i);
}
