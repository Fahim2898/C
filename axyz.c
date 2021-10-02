
#include<stdio.h>
int main()
{
	int x,y,z,a;
	printf("Enter the 3 Int Value:");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	{
		a=x;
	}
	else
	{
		a=y;
	}
	
	if(a<z)
	{
		a=z;
	}
	printf("The Leargest number =%d\n",a);
	return 0;
	}
