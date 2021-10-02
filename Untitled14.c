#include<stdio.h>
int main()
{
	int i,a,b,c;
	printf("Enter your Input:\n");
	scanf("%d",&a);
	if(a%2!=0)
	{
		b=a-2;
		for(i=1;i<=a;i++)
		{
			c=b*i;
			printf("%d X %d = %d\n",b,i,c);
		}
	}
	else
	{
		b=a+4;
		for(i=1;i<=a;i++)
		{
			c=b*i;
			printf("%d X %d = %d\n",b,i,c);
		}
	}
	return 0;
}
