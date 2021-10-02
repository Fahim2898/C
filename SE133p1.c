#include<stdio.h>*
int main()
{
    int a,b,c,n;
    printf("\t\tWelcome The Simple Calculator\n");
    printf("Enter Your Two Value :");
    scanf("%d%d",&a,&b);
    if(a>=b)
    {
        a=a;
        b=b;
    }
    else
    {
        c=b;
        b=a;
        a=c;
    }
    printf("Please sleact One option:\n1:Addition(+)\n2:Subtraction(-)\n3:Multiplication(X)\n4:Division(/)\n5.Modulus(%%)\n");
    scanf("%d",&n);
    printf("Your Result:");
    switch(n)
    {
        case 1:
            {
                c=a+b;
                printf("%d + %d =%d",a,b,c);
                break;
            }
         case 2:
            {
                c=a-b;
                printf("%d - %d =%d",a,b,c);
                break;
            }
         case 3:
            {
                c=a*b;
                printf("%d X %d =%d",a,b,c);
                break;
            }
         case 4:
            {
                if(b==0)
                {
                    printf("Math Error");
                }
                else
                {
                c=a/b;
                printf("%d / %d =%d",a,b,c);
                }
                break;
            }
            case 5:
            {
                if(b==0)
                {
                    printf("Math Error");
                }
                else
                {
                c=a%b;
                printf("%d %% %d =%d",a,b,c);
                }
                break;
            }
            default :
                {
                    printf("Invalid Input\n");
                }
    }
    return 0;
}
