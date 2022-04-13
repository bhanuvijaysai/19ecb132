#include<stdio.h>
main()
{
	int n,i=1,s=0;
	printf("\n Enter the value of n");
	scanf("%d",&n);
	while(i<=n)
	{
		s=s+i;
		i++;
	}
printf("%d",s);
}
