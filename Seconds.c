#include<stdio.h>
void main()
{
	int H,M,S,Second;
	printf("Enter the Seconds : ");
	scanf("%d", &S);
	H = S/3600;
	M = S/60-(H*60);
	Second = S-((H*3600)+(M*60));
	printf("%d Hours\n%d Minutes\n%d Seconds",H,M,Second);
}
