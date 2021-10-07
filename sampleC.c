#include<stdio.h>

int addTwo()
{	int n1,n2;
	printf("Enter Two integers ");
	scanf("%d,%d",&n1,&n2);
	printf("Sum of %d and %d  is %d", n1,n2,n1+n2);
	return 0;
}


int main()
{
	addTwo();
	
	return 0;
}
