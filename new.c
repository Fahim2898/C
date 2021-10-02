#include<stdio.h>
int main()
{
	int i,j,k,l;
	for(i=1;i<=7;i=i+2)
	{
		for(k=i;k<=7;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		
		printf("\n");
	}
	return 0;
}
