#include<stdio.h>
int main()
{
	double i,j=2,c,t=0;
	for(i=1;i<=10;i++)
	{
		printf("%.0lf/%.0lf",i,j);
		if(i<10)
		{
			printf(" + ");
		}
		
		c=i/j;
		t=c+t;
		j=j+2;
	}
	printf(" =%.1lf",t);
}
