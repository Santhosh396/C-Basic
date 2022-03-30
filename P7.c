#include<stdio.h>
int main()
{
	int i,s=0,a,b;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)    
    s=s+i;     
	printf("%d",s);
	return 0;
}
