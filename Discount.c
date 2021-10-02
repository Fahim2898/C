#include<stdio.h>
int main()
{
	int Pen, Khata, Book, Box, Total, dis, pay,a, b, c, d,e,f;
	printf("Pen Quinity:");
	scanf("%d",&a);
	printf("Khata Quinity:");
	scanf("%d",&b);
	printf("Book Quinity:");
	scanf("%d",&c);
	printf("Box Quinity:");
	scanf("%d",&d);
	Pen=a*22;
	Khata=b*35;
	Box=c*215;
	Box=d*517;
	Total=(Pen+Khata+Book+Box);
	printf("Tatal Amount is =%d\n",Total);
	if(Total>=1200)
	{
		dis=0.05*Total;
		printf("Discount Amount =%d\n", dis);
	}
	else
	{
		dis=0;
		printf("Discount Amount =%d\n", dis);
	}
	pay=Total-dis;
	printf("Total Pay Amount=%d\n", pay);
	f=pay*.15;
	printf("Total Bat=%d\n",f );
	e=pay+f;
	printf("Total Pay Amount With Bat=%d\n",e );
	return 0;
}
