#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], ch;
  	int i;
 
  	printf("\n Please Enter any String :  ");
  	fgets;
  	
  	printf("\n Please Enter the Character that you want to Search for :  ");
  	scanf("%c", &ch);
  	
  	for(i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == ch)  
		{
  			printf("\n '%c' is Found at Position %d ", ch, i + 1);
 		}
	}
	
  	return 0;
}
/*output
Please Enter any String :  
 Please Enter the Character that you want to Search for :  B
*/