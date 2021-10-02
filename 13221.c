#include<stdio.h>
int main()
{
	int n,i,k;
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		k=i*n;
		printf("%d x %d = %d\n",i,n,k);
	}
	return 0;
}
