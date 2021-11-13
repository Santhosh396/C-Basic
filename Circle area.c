#include<stdio.h>
void main()
{
	int r;
	float A,P;
	printf("Enter the Radius : ");
	scanf("%d",&r);
	P = 3.142857142857143;
	A = (P*r*r);
	printf("Area of the circle is %f",A);
}
