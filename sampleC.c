#include<stdio.h>

int addTwo()
{	int n1,n2;
	printf("Enter Two integers ");
	scanf("%d,%d",&n1,&n2);
	return (n1+n2);
	
}


void main()
{
	int a;
	a=addTwo();
	printf("Sum of two number is %d ",a);
	
}
