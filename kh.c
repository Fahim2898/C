#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m;
	printf("Dia ");
	scanf("%d",&a);
	scanf("%d",&b);
	printf(" : ");
	scanf("%d",&c);
	printf(" : ");
	scanf("%d",&d);
	printf("Dia ");
	scanf("%d",&e);
	scanf("%d",&f);
	printf(" : ");
	scanf("%d",&g);
	printf(" : ");
	scanf("%d",&h);
	if(b<f)
	{
		i=e-a;
		if(c<g) j=g-c; else if(g==c) j=0; else j=(g+60)-c;
		if(d<h) k=d-h; else if(d==h) k=0; else k=(h+60)-d;
		l=f-b;
		printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",i,l,j,k);
	}
	if(b>f)
	{
		i=e-a-1;
		if(c<g) j=g-c; else if(g==c) j=0; else j=(g+60)-c;
		if(d<h) k=d-h; else if(d==h) k=0; else k=(h+60)-d;
		l=(f+24)-b;
		printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",i,l,j,k);
	}	
	if(a==e)
	{	
		i=0;
		if(c<g) j=g-c; else if(g==c) j=0; else j=(g+60)-c;
		if(d<h) k=d-h; else if(d==h) k=0; else k=(h+60)-d;
		if(b>f) l=(f+24)-b; else if (b==f) l=0; else l=f-b;
		printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",i,l,j,k);
	}
	if(b==f)
	{
		i=e-a-1;
		if(c<g) j=g-c; else if(g==c) j=0; else j=(g+60)-c;
		if(d<h) k=d-h; else if(d==h) k=0; else k=(h+60)-d;
		l=0;
		printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",i,l,j,k);
	}
	
}
