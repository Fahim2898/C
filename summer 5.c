#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,Total,pay,change;
	printf("How many Pen(s) have you bought:");
	scanf("%d",&a);
	printf("\nHow many Paper(s) have you bought:");
	scanf("%d",&b);
	printf("\nHow many Eraser(s) have you bought:");
	scanf("%d",&c);
	printf("\nHow many Sharpener(s) have you bought:");
	scanf("%d",&d);
	printf("\nHow many Pencil(s) have you bought:");
	scanf("%d",&e);
	printf("\n\n**********Abdul Kuddus and Sons Stationary shop **********");
	f=0;
	if(a>0)
		{
			f=10*a;
			if(a==1)
			{
			printf("\nPen");
			}
			else {
			printf("\nPens");
			}   
			printf("          -%d x  10  %d Tk",a,f);
		}
		g=0;
	if(b>0)
		{
			g=2*b;
			if(b==1)
			{
			printf("\nPraper");
			}
			else {
			printf("\nPraprs");
			}
			printf("         -%d x  2  %d Tk",b,g);
		}
		h=0;
	if(c>0)
		{
			h=3*c;
			if(c==1)
			{
			printf("\nEraser");
			}
			else {
			printf("\nErasers");
			}
		    printf("        -%d x  3  %d Tk",c,h);
		}
		i=0;
	if(d>0)
		{
			i=5*d;
			if(d==1)
			{
			printf("\nSharpener");
			}
			else {
			printf("\nSharpeners");
			} 
			printf("     -%d x  5  %d Tk",d,i);
		}	
		j=0;	
	if(e>0)
		{
			j=4*e;
			if(e==1)
			{
			printf("\nPencil");
			}
			else {
			printf("\nPencils");
			}
			printf("        -%d x  4  %d Tk",e,j);
		}	
	Total=f+g+h+i+j;
	printf("\nTotal                   %d Tk",Total);
	printf("\nYou Pay Amount:           ");
	scanf("%d", &pay); 
	change=pay-Total;
	printf("Change :                %d Tk",change);
 return 0;
}
