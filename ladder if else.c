#include<stdio.h>
#include<conio.h>

void main()

{
	int a;
	
	printf("Enter any number:");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("This number is Positive.");
	}
	
	else if(a<0)
	{
		printf("This number is Negative.");
	}
	
	else if(a==0)
	{
		printf("This number is Neutral.");
	}
}