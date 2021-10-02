#include<stdio.h>
int main()
{
	int N,X,Y,i,j,k,l,m;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%d%d",&X,&Y);
	}
	if(X%2!=0) j=X;
	else if((X+1)%2!=0) j=X+1;
	for(k=1;k<=Y;k++)
	{
		l=j+l;
		j=j+2;
	}
	for(m=1;m<=N;m++)
	{
		printf("%d\n",l);
	}
	return 0;
}
