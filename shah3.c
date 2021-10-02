#include<stdio.h>
int main()
{
    int a[10]={2,4,6,8,10,12,14},i,search,n=0,k=6;
    for(i=0;i<=k;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("Which Value you want to delete, Enter the Value\n");
    scanf("%d",&search);
    if(a[0]==search || a[1]==search || a[2]==search || a[3]==search || a[4]==search || a[5]==search || a[6]==search)
    {
    for(i=0;i<10;i++)
    {
        if(a[i]==search)
        {
          n=n+i;
        }
    }
    for(i=n;i<=k-1;i++)
    {
        a[i]=a[i+1];
    }
    k--;
    for(i=0;i<=k;i++)
    {
        printf("%d\n",a[i]);
    }
    }
    else
    {
        printf("This element can not be deleted as it is not exist\n");
    }
    return 0;

}



