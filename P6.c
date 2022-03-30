#include<stdio.h>
int main()
{
	int i,a,b;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		int s=a;
		a=b;
		b=s;
	}
	for(i=a;i<=b;i++)
    	printf("%d\t",i);
	return 0;
}

