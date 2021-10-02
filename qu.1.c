#include<stdio.h>
int main()
{
	int i,j,k;
	printf("Enter Your Value:");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=k;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
