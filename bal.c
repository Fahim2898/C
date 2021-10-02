#include<stdio.h>
int main()
{
	int a;
	for(scanf("%d",&a);a<=2020)
	{
		if(a==2002)
		{
			printf("Acesso Permitido\n");
		}
		else
		{
			printf("Senha Invalida\n");
		}
	}
	return 0;
}
