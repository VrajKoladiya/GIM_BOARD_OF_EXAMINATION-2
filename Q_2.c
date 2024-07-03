#include<stdio.h>

main()
{
	int r,c,i,j,sum=0;
	
	printf("Enter your row = ");
	scanf("%d",&r);
	
	printf("Enter your culumn = ");
	scanf("%d",&c);
	
	int array[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(array[i]==array[j])
			{
				sum+=array[i][j];
			}
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i+j == 2)
			{
				sum+=array[i][j];
			}
		}
	}
	
	printf("Sum of diagonal element of matrix =  %d",sum);
}