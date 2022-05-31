#include<stdio.h>
int main()
{
	int n,r,s=0;
	printf("\n Enter the value of n");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("\n sum is %d",s);
}
/*output
Enter the value of n 3

 sum is 3
  */