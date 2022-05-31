#include<stdio.h>
int main()
{
	int n,i=1;
	printf("\n Enter the value of n");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%3d",i);
		i++;
	}
}
/*output
Enter the value of n 5
  1  2  3  4  5
  */