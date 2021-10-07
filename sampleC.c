#include<stdio.h>

float addTwo()
{	int n1,n2;
	printf("Enter Two integers ");
	scanf("%d,%d",&n1,&n2);
	return (n1+n2)/2;
	
}


void main()
{
	float a;
	a=addTwo();
	printf("Sum of two number is %f ",a);
	
}
