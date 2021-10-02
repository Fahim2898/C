#include<stdio.h>
int main()
{
	double a,b,c,d=0,e,f=0,g;
	printf("Your total cidat:");
	scanf("%lf",&a);
	printf("\nCridat & GPA:");
	while(scanf("%lf%lf",&b,&c))
	{
		e=b*c;
		f=f+e;
		d=d+b;
		if(a==d ||a<=d )
		{
			break;
		}
		printf("\nCridat & GPA:");
	}
	g=f/d;
	printf("Your semister CGPA=%.2lf",g);
	return 0;
}
