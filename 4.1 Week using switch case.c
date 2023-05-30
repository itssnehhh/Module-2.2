//Monday to Sunday Switch case programme

#include<stdio.h>
int main()
{
	int day;
	printf("Enter the number for day :- ");
	scanf("%d",&day);
	
	switch(day)
	{
		
	case 1:
	printf("Monday");
	break;	
	
	case 2:
	printf("Tuesday");
	break;
	
	case 3:
	printf("Wednesday");
	break;
	
	case 4:
	printf("Thurday");
	break;
	
	case 5:
	printf("Friday");
	break;
	
	case 6:
	printf("Satuday");
	break;
	
	case 7:
	printf("Sunday");
	break;	

	default:
	printf("Please enter a valid number.");	

	return 0;		
}	
	
	
	
	
}
