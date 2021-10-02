#include <stdio.h>
#include <string.h>
int main()
{
   char string[100];
   int c = 0, count[26] = {0}, x;
   printf("Counting Capital alphabet from sentence.\n");
   printf("Write a sentence:\n");
   gets(string);
   while (string[c] != '\0')
    {
      if (string[c] >= 'A' && string[c] <= 'Z') {
         x = string[c] - 'A';
         count[x]++;
      }
      c++;
   }
   printf("Character\tTime\n");
   for (c = 0; c < 26; c++)  
	   {
		printf("%c \t %d \n", c + 'A', count[c]);
		}  
   return 0;
}
