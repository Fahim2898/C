#include<stdio.h>
int main()
{
	int i,j,k,n=1,o=0,l=1;
	printf("Enter Your Value:");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=l;j++)
		{
			printf("%d ",n);
			n++;
		}
		l++;
		printf("\n");
			
	}

	return 0;
}
