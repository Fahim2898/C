#include<stdio.h>
int main()
{
	int a=0,b=1,c;
	 printf("%d\n%d\n",a,b);
	c=a+b;
	while(c<=125)
	{
		printf("%d\n",c);
		a=b;
		b=c;
		c=a+b;
	}
	return 0;
}
