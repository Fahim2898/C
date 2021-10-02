#include<stdio.h>
int main()
{
	int A,B,C,D,E,F,G,H,I,J,K,L,M,N;
	scanf("%d",&A);
	printf("%d\n",A);
	B=A/100;
	C=A%100;
	D=C/50;
	E=C%50;
	F=E/20;
	G=E%20;
	H=G/10;
	I=G%10;
	J=I/5;
	K=I%5;
	L=K/2;
	M=K%2;
	N=M/1;
	printf("%d nota(s) de R$ 100,00\n",B);
	printf("%d nota(s) de R$ 50,00\n",D);
	printf("%d nota(s) de R$ 20,00\n",F);
	printf("%d nota(s) de R$ 10,00\n",H);
	printf("%d nota(s) de R$ 5,00\n",J);
	printf("%d nota(s) de R$ 2,00\n",L);
	printf("%d nota(s) de R$ 1,00\n",N);
	return 0;
}
