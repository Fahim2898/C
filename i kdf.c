#include<stdio.h>
int main()
{
	int i,j,k,l,m,n,o;
	for(i=5;i<=10;i++)
	{
		for(j=4;j<=i+4;j++)
		{
		printf(" ");	
		}
		for(k=1;k<=1;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(l=1;l<=7;l++)
	{
		printf("* ");
	}
	printf("\n");
	for(m=10;m>=5;m--)
	{
		for(n=m;n>=0;n--)
		{
			printf(" ");
		}
		for(o=1;o<=1;o++)
		{
		printf("* ");
		}
		printf("\n");
	}
	return 0;
}
