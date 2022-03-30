#include<stdio.h>
#include<math.h>
int main()
{
	int i,a,b;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		printf("%d\t%d\t%d\n",i, (int)pow(i, 2), (int)pow(i, 3));
	}
	return 0;
}

