//Programme to print factorial of given number
//Factorial = num*(num-1)*(num-2)*(num-3)*.....*1


#include<stdio.h>
int main()
{
	int i,fact=1,number;
	
	printf("Enter the number :- ");   //User will input the value
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
	{
	fact=fact*i;
	}
	
	printf("\n Factorial of %d is = %d",number,fact);
	
	return 0;
}
