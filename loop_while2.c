#include<stdio.h>

void main()
{
	int n,i=1,fact=1;
	printf("Enter n:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		
		fact=fact*i;
		i++;	
	}	
		printf("fact is %d",fact);
}