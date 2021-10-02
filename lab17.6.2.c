#include<stdio.h>
main()
{
int a[10],i,newindex,n;
printf("Enter array Size less than 10");
scanf("%d",&n);
printf("Enter %d array elements ",n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("Array elements are : ");
for(i=0;i<n;i++)
    printf("%d ",a[i]);

    printf("Enter the index of one specific data that you want to delete ");
    scanf("%d",&newindex);

       for(i=newindex;i<=n-1;i++)
        a[i]=a[i+1];

printf("After Deletion elements of the array are : ");
 for(i=0;i<n-1;i++)
    printf("%d ",a[i]);

}
