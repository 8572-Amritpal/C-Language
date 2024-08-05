#include<stdio.h>
#include<conio.h>

void main()

{
	int maths,eng,sci;

	printf("Enter maths marks:");
	scanf("%d",&maths);
	
	printf("Enter english marks:");
	scanf("%d",&eng);
	
	printf("Enter science marks:");
	scanf("%d",&sci);
	
	if(maths<=100 && eng<=100 && sci<=100)
	{
		printf("Average marks:",maths+eng+sci/3);
	}
	else
	{
		printf("Enter valid number.");
	}
}