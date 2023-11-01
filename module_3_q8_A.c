#include<stdio.h>
main()
{
	int a,i,j;
	printf("Enter the rows to print :");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
