#include<stdio.h>
int main()
{
    int n,total,unit;
    printf("Press 1 if your unit between 30 to 59\n");
    printf("Press 2 if your unit between 60 to 79\n");
    printf("Press 3 if your unit between 80 to 99\n");
    printf("Press 4 if your unit more then 100\n");
    scanf("%d",&n);
    printf("Enter your unit number :");
    scanf("%d",&unit);
    switch(n)
    {
        case 1:total=unit*5.00;
        break;
        case 2:total=unit*3.50;
        break;
        case 3:total=unit*3.00;
        break;
        case 4:total=unit*2.00;
        break;
        default: printf("Wrong input");
    }
    printf("Total Electricity Bill = %d",total);
    return 0;
}
