#include <stdio.h>

int main(void) {
	int e;
	scanf("%d",&e);
	if(e<0)
	{
		printf("invalid");
	}
	else if(e%2==0)
	{
		printf("Even");
	}
	else 
	{
		printf("Odd");
	}
	
	return 0;
}
