#include<stdio.h>
int main()
{
	int b,c,i,j;
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
	printf("Sum of the rows : ");
	
	for(i=0;i<b;i++)
	{
	    int row=0,col=0;
		for(j=0;j<c;j++)
		{
			row=row+a[i][j];
		}
		printf("%d ",row);
	}
	printf("\nSum of the col : ");
	for(i=0;i<b;i++)
	{
	    int row=0,col=0;
		for(j=0;j<c;j++)
		{
			col=col+a[j][i];
		}
		printf("%d ",col);
	}
}
