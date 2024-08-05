#include<stdio.h>
#include<conio.h>

void main()

{
	int x=8,y=3;
	
	printf("Enter value of x:");
	scanf("%d,&x");
	
	printf("Enter value of y:");
	scanf("%d,&y");
	
	if(x<y)
	{
		printf("x is minimum");
	}
	
	else
	{
		printf("y is minimum");
	}
}