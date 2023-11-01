#include<stdio.h>
main()
{
	int a,i,j,k;
//	printf("Enter the rows to print :");
//	scanf("%d",&a);
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf(" ");
		}
		for(k=1;k<=5;k++)
		{
			printf("*");	
		}
		printf("\n");
	}
}
