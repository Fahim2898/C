#include<stdio.h>
int main()
{
	int i;
	scanf("%d",&i);
	if(i==0)
	{
		printf("E\n");
	}
	else if(i>=1 && i<=35)
	{
		printf("D\n");
	}
	else if(i>=36&&i<=60)
	{
		printf("C\n");
	}
	else if(i>=61&&i<=85)
	{
		printf("B\n");
	}
	else if(i>=86&&i<=100)
	{
		printf("A\n");
	}
	else
	{
		printf("\n");
	}
	return 0;
}
