//Fibonacci Series  :- 0 1 1 2 3 5 8.......n 

#include<stdio.h>
int main()
{
	int n,a=0,b=1,i,c;
	
	printf("Enter the number of term :- ");
	scanf("%d",&n);
	
	printf("Fibonacci Series upto %d terms \n ",n);
	for(i=1;i<=n;i++)
	{
	printf("%d   ",a);
	c = a + b;
	a = b ;
	b = c;
	}
	
	return 0;
}
