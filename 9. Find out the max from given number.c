//Find out the max from given number

#include<stdio.h>
int main()
{
	int num,m,max,r;
	
	printf("Enter the number :- ");
	scanf("%d",&num);
	
	m = num;
	
	max = 0;
	
	while (m!=0)
    {
	 r=m % 10;
	if(r>max)
	{
	max = r;
	}
	m = m/10;
	}
	
	printf("Max number is = %d",max);
	
	return 0;
}
