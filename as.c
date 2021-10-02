#include<stdio.h>
#include <string.h>
int main()
{
char a[100],ch='A';'E';
printf("Counting alphabet 'Vawel & Con' from sentence.\n");
printf("Write a sentence:\n");
gets(a);
int N=0,i,l=strlen(a),p=0;
for(i=0;i<=l;i++)
{
if(ch==a[i])
{
N=N+1;
}
}
printf("The number of A is %d",N);
return 0;
}
