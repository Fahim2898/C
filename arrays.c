#include<stdio.h>
int main()
{printf("\n\nProgram Array\n\n");
	int a[10],i;
	double avg,sum=0;
	printf("Enter 10 Value of Group:\n");
	for (i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=1;i<=10;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/10;
	printf("\n\tAverage= %.2lf\n",avg);
	return 0;
}

