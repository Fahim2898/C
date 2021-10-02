#include<stdio.h>

int mv(int a,int b);

int c(int a[],int n);

int main()

{

    int unitp[10] = {1,3,4,6,8,10,16,19,22},n = 9;

    printf("Best Price is = %d\n",c(unitp,n));

    return 0;



}

int mv(int a,int b)

{

    if(a>b)

    {

        return a;

    }

    else

    {

        return b;

    }

}

int c(int a[],int n)

{

       int v[n+1],i,k;

       v[0] = 0;

       for(i=1;i<=n;i++)

       {

           int m = 0;

           for(k=0;k<i;k++)

           {

               m = mv(m,a[k]+v[i-k-1]);

           }

           v[i] = m;

       }



    return v[n];

}


