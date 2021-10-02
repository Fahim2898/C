#include<stdio.h>

int main()
{
    int x[5],y[5],z[5],i;
    printf("Wellcome the Array\n\n");
    printf("Enter the data of X:\n");
    for(i=0; i<5; i++)
	 {
		
        scanf("%d",&x[i]);

    }
    printf("\n\nEnter the data of Y:\n");
    for(i=0; i<5; i++)
	{
        scanf("%d",&y[i]);
    }
    printf("\n\n\t Output:\n");
    for(i=0;i<5;i++)
	{z[i]=x[i]+y[i];
	
    printf("%d\t",z[i]);
	}
return 0;
}
