#include<stdio.h>
main()
{
	int n,i=1,s=0;
	printf("\n Enter the value of n");
	scanf("%d",&n);
	while(i<=n/2)
	{
		if(n%i==0)
		s=s+i;
		i++;
	}
	if(n==s)
printf("%d is a perfect number",n);
    else
printf("\n %d is not a perfect number",n);
}
