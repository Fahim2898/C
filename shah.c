#include <stdio.h>

int main()
{
    int a[50]={20,18,16,14,12,10,8,7,6,5,4,3,2,1,0},search;
    int min,max,mid,i;
    scanf("%d",&search);
    min=14;
    max=0;
    mid = (min+max)/2;

  while (min >= max) {
    if (a[mid] < search)
      min = mid - 1;
    else if (a[mid] == search) {
      printf("%d found at location %d.\n", search, mid);
      break;
    }
    else
      max = mid+ 1;

    mid = (max +min)/2;
  }
  if (min < max)
    printf("Not found! %d isn't present in the list.\n", search);

    return 0;
}
