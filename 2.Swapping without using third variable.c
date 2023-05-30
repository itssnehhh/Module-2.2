//Swapping of two numbers without using third variable

#include<stdio.h>
int main()
{
	int num1,num2;
	
	printf("Enter the value of num1 :- ");
	scanf("%d",&num1);
	printf("Enter the value of num2 :- ");
	scanf("%d",&num2);
	
	printf("--After Swapping--\n");
	num1=num1+num2;  
	num2=num1-num2;
	num1=num1-num2;
	
	printf("After swapping num1 is = %d",num1);
	printf("\n After swapping num2 is = %d",num2);
	return 0;
}
