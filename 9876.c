#include<stdio.h>
int main()
{
	int i,k;
	char j,l;
	for(i=0;i<=9;i++)
	{
		for(k=9;k>=i;k--)
		{
			printf("  ");
		}
		for(j=0;j<=i;j++)
		{		
			printf("%c ",j+65);
		}
		for(l=i-1;l>=0;l--)
		{
			printf("%c ",l+65);
		}
		printf("\n");
	}
	return 0;
}
