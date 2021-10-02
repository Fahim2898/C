#include<stdio.h>
int main()
{
	char i,j;
	for(i=0;i<=4;i++)
	{
	for(j=0;j<=i;j++)
	{
		printf("%c\t",i+65);
	}
	printf("\n");
	}
	return 0;
}
