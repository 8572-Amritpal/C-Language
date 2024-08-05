#include<stdio.h>
#include<conio.h>

void main()

{
	int year1;
	int year2;
	printf("Enter the first year:");
	scanf("%d",&year1);
	printf("Enter the second year:");
	scanf("%d",&year2);
	
	while(year1<=year2)
	{
		if(year1%4==0)
		{
		printf("%d ",year1);
	}
		year1++;
	}
}