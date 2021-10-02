#include<stdio.h>
int main()
{	
	double Y;
	int A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,Q,R,S,T,U,V,W,X,P;
	scanf("%lf",&Y);
	A=Y*100;
	B=A/10000;
	C=A% 10000;
	D=C/5000;
	E=C%5000;
	F=E/2000;
	G=E%2000;
	H=G/1000;
	I=G%1000;
	J=I/500;
	K=I%500;
	L=K/200;
	M=K%200;
	N=M/100;
	O=M%100;
	P=O/50;
	Q=O%50;
	R=Q/25;
	S=Q%25;
	T=S/10;
	U=S%10;
	V=U/05;
	W=U%05;
	X=W/01;
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",B);
	printf("%d nota(s) de R$ 50.00\n",D);
	printf("%d nota(s) de R$ 20.00\n",F);
	printf("%d nota(s) de R$ 10.00\n",H);
	printf("%d nota(s) de R$ 5.00\n",J);
	printf("%d nota(s) de R$ 2.00\n",L);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",N);
	printf("%d moeda(s) de R$ 0.50\n",P);
	printf("%d moeda(s) de R$ 0.25\n",R);
	printf("%d moeda(s) de R$ 0.10\n",T);
	printf("%d moeda(s) de R$ 0.05\n",V);
	printf("%d moeda(s) de R$ 0.01\n",X);
	
	return 0;

}
