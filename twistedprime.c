#include<stdio.h>
main()
{
	int n,r,s=0,c=0,i=2,n1;
	printf("\n enter n");
	scanf("%d",&n);
	n1=n;
	while((i<n)&&(n>1))
	{
		if(n%i==0)
		{
			c=1;
			break;
		}
		i++;
	}
		while(n>0)
		{
			r=n%10;
			s=s*10+r;
			n=n/10;
		}
		i=2;
		while(i<s)
		{
			if(s%i==0)
			{
				c=1;
				break;
			}
			i++;
		}
		if(c==0)
		printf("%d is a twisted no.",n1);
		else
		printf("%d is not a twisted no.",n1);	
}
