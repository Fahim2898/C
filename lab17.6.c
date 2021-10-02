#include <stdio.h>
int main()
{
  int array[100], search, i, n,newindex;

  printf("Enter number of elements in array:\n");
  scanf("%d", &n);

  printf("Enter %d integer(s):\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  printf("Enter a number to search and Delete element:\n");
  scanf("%d", &search);

  for (i = 0; i < n; i++)
  {
    if (array[i] == search)
    {
      printf("%d is present at Position: %d.\n", search, i+1);

    	newindex=i;
       	for(i=newindex;i<=n-1;i++)
        array[i]=array[i+1];

	printf("After Deletion elements of the array are : ");
 	for(i=0;i<n-1;i++)
    printf("%d ",array[i]);
    break;
    }
  }
  if (i == n)
    printf("%d is n't present in the array.\n So, This element can not be deleted as it is not exist.\n", search);
  return 0;
}

