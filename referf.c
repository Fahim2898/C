#include<stdio.h>
int main ()
{
	double A,B,C;
	scanf("%lf%lf%lf",&A,&B,&C);
	if(B >= A + C)
	{
		printf("NAO FORMA TRIANGULO\n");
	}
	if(C*C == B*B + A*A)
	{
		printf("TRIANGULO RETANGULO\n");
	}
	if(C*C > B*B + A*A)
	{
		printf("TRIANGULO OBTUSANGULO\n");
	}
	if(C*C < B*B + A*A)
	{
		printf("TRIANGULO ACUTANGULO\n");
	}
	if(A==B && A==C && B==C)
	{
		printf("TRIANGULO EQUILATERO\n");
	}
	if((A==B &&A!=C) || (B==C && A!=C) || (A==C  && A!=B) )
	{
		printf("TRIANGULO ISOSCELES\n");
	}
	return 0;
}
