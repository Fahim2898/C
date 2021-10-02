#include<stdio.h>
int main( )
{
	int a,b,c,d,e,f,g,h,i,j,Total;
	printf("How many pen(s) have you bought:");scanf("%d",&a); 
	printf("\nHow many Paper(s) have you bought:");scanf("%d",&b); 
	printf("\nHow many Eraser(s) have you bought:");scanf("%d",&c); 
	printf("\nHow many Sharpener(s) have you bought:");scanf("%d",&d); 
	printf("\n***********WELLCOME TO THE SHOP**********");
	f=0;if(a>0){switch (a)
	{	case 1:printf("\nPen");break;
		default :printf("\nPens");break;	}
		f=10*a;printf("      -%d  x 10  %d  Tk",a,f);}
		g=0;if(b>0)
	{switch (b)
	{	case 1:printf("\nPaper");break;
		default :printf("\nPapers");break;;}
		g=2*b;
		printf("     -%d  x 2  %d  Tk",b,g);}
	h=0;if(c>0)
	{switch (c)
		{case 1:printf("\nEraser");break;
		default :printf("\nErasers");break;}
		h=3*c;printf("    -%d  x 3  %d  Tk",c,h);	}
	i=0;if(d>0)
	{switch (d)
		{case 1:printf("\nSharpener");break;
			default :printf("\nSharpeners");break;	}
		i=5*d;	printf(" -%d  x 5  %d  Tk",d,i);}
	Total=(f+g+h+i);
	printf("\nTotal              %d Tk", Total);
	return 0;	
}
