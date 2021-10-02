#include<stdio.h>
int main()
{
	int i,j,k,n=0;
	printf("Enter Your Value:");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		for(j=i;j<=n+i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
		n++;
	}
	return 0;
}
