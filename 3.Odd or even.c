//Find out the number is even or odd using ternary operator

#include<stdio.h>
int main()
{
	int num;
	printf("enter the num: ");
	scanf("%d",&num);
	
	  (num % 2 == 0) ?
	  (printf("number is even")) //num will devided by 2 
	  :
	   (printf("number is odd")); //num will not devided by 2
		
	return 0;
}

