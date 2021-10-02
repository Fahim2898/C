#include<stdio.h>
int main()
{
	char i,j,k,l;
	for(i=0;i<=4;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("  ");
		}
		
		for(k=0;k<=i;k++)
		{
			printf("%c ",k+65);
		}
		for(l=i-1;l>=0;l--)
		{
			printf("%c ",l+65);
		}
		printf("\n");
			}
	return 0;
}
