#include<stdio.h>
int main()
{
	int i,t=0;
	for(i=9;i<100;i=i+6)
	{
		printf("%d",i);
		if(i<99)
		{
			printf("+");
		}
		t=t+i;
	}
	printf("=%d",t);
	return 0;
}
