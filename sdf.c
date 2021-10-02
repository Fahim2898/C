#include <stdio.h>
int main()
{
    int b,i;
    printf("enter the term of nth");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
	{
        printf("%d =  %d; ",i,i*i);
    }
    printf("\n");
    return 0;
 
}
