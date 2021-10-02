#include<stdio.h>
int main()
{
	int i,j,k,l;
	printf("Enter the value: ");
	scanf("%d",&l);
	for(i=1;i<=l;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
