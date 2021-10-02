#include<stdio.h>
int main()
{
	int i,j,k,l=1;
	char n=1;
	printf("Enter Your Value:");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=l;j++)
		{
			printf("%c ",n+96);
			n++;
		}
		l++;
		printf("\n");
			
	}

	return 0;
}
