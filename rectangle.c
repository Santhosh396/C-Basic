#include<stdio.h>
void main()
{
	int L,W,A,P;
	printf("Enter the Length of the rectangle : ");
	scanf("%d", &L);
	printf("\nEnter the Width of the rectangle : ");
	scanf("%d", &W);
	A = L*W;
	P = 2*(L+W);
	printf("\nArea of the rectanngle is %d\n", A);
	printf("\nPerimeter of the rectangle is %d\n", P);
}
