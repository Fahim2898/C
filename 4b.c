#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,Price,P_A;
	printf("Wellcome\nNumber of Shoes & price:");
	scanf("%d%d",&a,&d);
	
	printf("\nNumber of T-shart & price:");
	scanf("%d%d",&b,&e);
	printf("\nNumber of Jeans pant & price:");
	scanf("%d%d",&c,&f);
	Price=(a*d)+(b*e)+(c*f);
	P_A=Price*.85;
	printf("Price=%d BDT\nAfter 15Percent discount  %d BDT", Price,P_A);
return 0;	
}
