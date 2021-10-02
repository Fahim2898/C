#include <stdio.h>
#include <string.h>
void ch(char [], int []);
int main()
{
   char string[1000];
   int i, count[1] = {0},s,c=0;
   printf("Counting alphabet 'A' from any sentence.\n");
   printf("Input a string\n");
   gets(string);
   while (s[c] != '\0') {
      if (s[c] >= 'A')
         count[s[c]-'A']++;
      c++;
   }
}
return 0;
}
