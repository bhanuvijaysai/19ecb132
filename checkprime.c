#include<stdio.h>
int main()
{
	int n,i=2,c=0;
	printf("\n enter the value of n");
	scanf("%d",&n);
	while((i<n)&&(n>1))
	{
		if(n%i==0)
		{
		c=1;
		break;	
		}
		i++;
	}
	if(c==0)
	printf("%d is prime number",n);
	else
	printf("%d is not a prime number",n);
}
/* output

 enter the value of n
2
2 is prime number*/