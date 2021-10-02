#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		printf("%d\n\n",i);
		for(j=1;j<=i;j++ )
		{
		if(i>=j)
		{
			printf("%d\t",j);
		}
		else
		{
			printf(" ");
		}
		}
		printf("\n\n");
	}
	return 0;
}
