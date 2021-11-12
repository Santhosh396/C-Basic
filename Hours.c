#include<stdio.h>
void main()
{
	int H,M,R;
	printf("Enter the minutes : ");
	scanf("%d", &M);
	H = M/60;
	R = M-H*60;
	printf("%d Hours and %d Minutes",H,R);
}
