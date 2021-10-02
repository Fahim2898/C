#include<stdio.h>
int main()
{
	int i,j,k,l,m,n;
	printf("Enter The number of rows: ");
	scanf("%d",&l);
	for(i=l;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		for(k=i+1;k<=l;k++)
		{
			printf(" ");
		}
		for(m=i+1;m<=l;m++)
		{
			printf("   ");
		}
		for(n=i;n>=1;n--)
		{
			printf("%d ",n);
		}
			printf("\n");
	}
	for(i=1;i<=l;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		for(k=i+1;k<=l;k++)
		{
			printf(" ");
		}
		for(m=i+1;m<=l;m++)
		{
			printf("   ");
		}
		for(n=i;n>=1;n--)
		{
			printf("%d ",n);
		}
			printf("\n");
	}
	return 0;
}
