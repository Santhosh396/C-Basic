#include<stdio.h>
int main()
{
	int n,nb;
	scanf("%d",&n);
	nb=n/10;
	if (nb%n==0)
	{
		printf("%d",nb);
	}
	else
	{
		printf("%d",nb+1);
	}
	return 0;
}
