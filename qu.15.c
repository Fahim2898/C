#include<stdio.h>
int main()
{
	int i,j,k=1,l,c;
	printf("Enter the value: ");
	scanf("%d",&l);
	for(i=1;i<=l;i++)
	{
		for(j=1;j<=l;j++)
		{	
			if(c=(k%2)!=0)
			{
				printf("%d ",c);
			}
			else
			{
				printf("%d ",c);
			}
			k++;
		}
		printf("\n");
		}	
	return 0;
}	
