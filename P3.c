#include<stdio.h>
int main()
{
	int i,x,a,b;
	scanf("%d%d%d",&x,&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%x==0)
		printf("%d\t",i);
	}
	return 0;
}

