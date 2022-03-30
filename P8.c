#include<stdio.h>
int main()
{
	int i,x,a,b,s=0;
	scanf("%d%d%d",&x,&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%x==0)
		{
			s++;
		}
	}
	printf("%d",s);
	return 0;
}
