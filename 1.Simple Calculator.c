//Simple Calculator

#include<stdio.h>
int main()
{
	int num1,num2,Ans;
	char symbol;
	
	printf("Enter a Symbol (+,-,*,%,/) :- ");   //user have to enter a symbol
	scanf("%c",&symbol);
	printf("Enter the value of num1 :- ");
	scanf("%d",&num1);
	printf("Enter the value of num2 :- ");
	scanf("%d",&num2);
	
	switch(symbol)
	
	{
	case '+':    //If user had input a '+' sign then this case will execute otherwise next case
	Ans=num1+num2;
	printf("Addition of num1 and num2 is = %d ",Ans);
	break;	
		
	case '-':    //If user had input a '-' sign then this case will execute otherwise next case
	Ans=num1-num2;
	printf("Subtraction of Num1 and Num2 is = %d",Ans);	
	break;
		
	case '*':	//If user had input a '*' sign then this case will execute otherwise next case
	Ans=num1*num2;	
	printf("Multiplication of Num1 and Num2 is = %d",Ans);	
	break;	
	
	case '/':	//If user had input a '/' sign then this case will execute otherwise next case
	Ans=num1/num2;
	printf("Division of Num1 and Num2 is = %d",Ans);	
	break;
	
	case '%':  //If user had input a '%' sign then this case will execute otherwise next case
	Ans=num1%num2;
	printf("Modulo of num1 and num2 is = %d ",Ans);
	break;
	
	default:   //If any cases from above had not execute then 
	printf("Please enter a valid Operator.");
	}
	return 0;
} 
