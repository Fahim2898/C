#include<stdio.h>
int main()
{
	int i,n,f=1,t=0;
	printf("Enter your ! number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	t=t+f;
	printf("%d!=%d",n,t);
	return 0;
}
