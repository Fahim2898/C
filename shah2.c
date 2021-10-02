#include<stdio.h>
int main()
{
    char a[14]={'p','g','t','x','w','a','v','r','b','x','y'},temp;
    int n=0,k=9,i,j;
    for(i=0;i<11;i++)
    {
        for(j=0;j<=k;j++)
        {
            if(a[n]<a[j+1])
            {
                a[n]=a[n];
                n++;
            }
            else
            {
               temp=a[n];
                a[n]=a[j+1];
                a[j+1]=temp;
                n++;
            }
        }
        n=0;
        k--;
    }
    printf("After Sorting\n");
    for(i=0;i<11;i++)
    {
        printf("%c\n",a[i]);
    }
    int mid,min=10,max=0;
    char search;
    scanf("%c",&search);
    i=0;
    while(i<11)
    {
        mid=(min+max)/2;
        if(a[mid]==search)
        {
            printf("Your Value is %c and it's position is %d\n",a[mid],mid+1);
            break;
        }
        else if(min<max)
        {
            printf("Your searching element is not here\n");
            break;
        }
        else if(a[mid]>search)
        {
            min=mid-1;
        }
        else
        {
            max=mid+1;
        }
        i++;
    }
    return 0;
}
