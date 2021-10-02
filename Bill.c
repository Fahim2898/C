#include<stdio.h>
int main()
{
	int unit,total;
	printf("\t\t Electricity Bill\n\nEnter your electricity unit:");
	scanf("%d",&unit);
	
	if("unit<=100")
	{
		total=unit*2;
		printf("Unit--%d\nPer Unit 2Tk\nTotal--%d",unit,total);
	}
	else if("unit>=80 && unit<=99")
	{
		total=unit*3;
		printf("Unit--%d\nPer Unit 3Tk\nTotal--%d",unit,total);
	}
	else if("unit>=60 && unit<=79")
	{
		total=unit*3.5;
		printf("Unit--%d\nPer Unit 3.50Tk\nTotal--%d",unit,total);
	}
	else if("unit<=59 && unit>=30")
	{
		total=5*unit;
		printf("Total bill%d\nPer Unit=5Tk",total);
	}
	else{
		printf("Input Error");
		}
	return 0;	
}
