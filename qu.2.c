#include<stdio.h>
int main()
{
	int i,j,k,l;
	printf("Enter Your Value:");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		for(j=i;j<=k+i-1;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
