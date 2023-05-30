//Print number in reverse order

#include<stdio.h>
int main()
{ 
	int num,reverse=0,m;
	
	printf("Enter the number :- ");
	scanf("%d",&num);
	
	while(num!=0)
	{
	m = num % 10;
	reverse = reverse * 10 + m;
	num/=10;
	}
	
	printf("Reversed number : %d",reverse);
	
	return 0;
}
