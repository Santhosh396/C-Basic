#include<stdio.h>
void main()
{
	int P,t;
	float SI,r;
	printf("Enter principal value : ");
	scanf("%d",&P);
	printf("Enter the time in years : ");
	scanf("%d",&t);
	printf("Enter the rate of intrest : ");
	scanf("%f",&r);
	SI = P*t*r/100;
	printf("Simple intrest is %f",SI);
}
