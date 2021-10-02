#include <stdio.h>
int main()
{
    double n,b=2,c=0,k;
    printf("Give a Number");
    scanf("%lf",&k);
    while(n<=k){
        printf("%.0lf/%.0lf",n,b);
        if(n<k){
            printf(" + ");
        }
        else{printf(" = ");}
         n=n+2;
         b=b+2;
         c=c+n/b;
    }
    printf("%.2lf",c);
    return 0;
}
