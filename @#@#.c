#include<stdio.h>
int main()
{
	int i,j; 
	for(i=1;i<=10;i++)
	{
		for(j=i;j<=10;j++)
		{
			if(j%2==0)
			{
				printf("@\t");
			}
			else
			{
				printf("#\t");
			}
		}
		printf("\n");
	}
	return 0;
}
