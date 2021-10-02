#include<stdio.h>
int main()
{
int i,j,k;
i=1;
while(i<=5)
{
    k=4;
    while(k>=i)
    {
        printf("  ");
        k--;
    }
    j=i;
    while(j>=1)
    {
    printf("%d ",i);
    j--;
    }
    printf("\n");
    i++;
}
return 0;
}

