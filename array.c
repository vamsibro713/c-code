#include<stdio.h>
int main()
{
	int b,c,i,j,row=0,col=0;
	printf("Enter no of rows : ");
	scanf("%d",&b);
	printf("Enter no of columns : ");
	scanf("%d",&c);
	int a[b][c];
	printf("Enter the matrix");
	for(i=0;i<b;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<b;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
