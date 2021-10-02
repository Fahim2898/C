#include<stdio.h>

int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
int subtract(int a,int b)
{
    int sub;
    if(a>b)
    {
        sub=a-b;
    }
    else
    {
        sub=b-a;
    }
    return sub;
}
int multiple(int a,int b)
{
    int mul;
    mul=a*b;
    return mul;
}
int divi (int a,int b)
{
    int div;

    div=a/b;

    return div;
}
int modulus (int a, int b)
{
    int modulus;

    modulus=a%b;

    return modulus;
}
int main()
{
    int n,c,d;

        printf("Please sleact One option:\n");
        printf("1:Addition(+)\n2:Subtraction(-)\n3:Multiplication(X)\n4:Division(/)\n5.Modulus(%%)\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1: {
                    printf("Enter two Value:\n");
                    scanf("%d %d",&c,&d);
                    printf("Your Addition Value :%d + %d = %d\n",c,d,add(c,d));
                    break;
                    }
            case 2: {
                    printf("Enter two Value:\n");
                    scanf("%d %d",&c,&d);
                    printf("Your subtraction Value:%d - %d =  %d\n",c,d,subtract(c,d));
                    break;
                    }
            case 3: {
                    printf("Enter two Value:\n");
                    scanf("%d %d",&c,&d);
                    printf("Your multiplication Value:%d X %d =  %d\n",c,d,multiple(c,d));
                    break;
                    }
            case 4: {
                    printf("Enter two Value:\n");
                    scanf("%d %d",&c,&d);
                    if(d!=0)
                    {
                    printf("Your Division Value :%d / %d =  %d\n",c,d,divi(c,d));
                    }
                    else
                    {
                        printf("It's not possible\n");
                    }
                    break;
                    }
            case 5:{
                        printf("Enter two Value:\n");
                        scanf("%d %d",&c,&d);
                        if(d!=0)
                    {
                    printf("Your Modulus Value :%d %% %d =  %d\n",c,d,modulus(c,d));
                    }
                    else
                    {
                        printf("It's not possible\n");
                    }
                   }
             default :
                {
                    printf("Invalid Input\n");
                }
          }
    return 0;
}
