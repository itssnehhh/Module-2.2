// Print table 

#include<stdio.h>
int main()
{
	int num,i=1;
	
	printf("Enter the number :- ");
	scanf("%d",&num);
	
	
	printf("\n\n----The table of %d is----\n",num);
	
	table:
	printf("%d * %d = %d \n",num,i,num*i);
	i++;
	
	if(i<=10)
	goto table;
	
	return 0;
}
