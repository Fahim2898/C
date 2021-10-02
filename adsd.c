#include <stdio.h>
#include <string.h>
void find_frequency(char [], int []);
int main()
{
 char string[1000];
 int i, count[1] = {0};
 printf("Counting alphabet 'A' from any sentence.\n");
 printf("Input a sentence:\n");
 gets(string);
 find_frequency(string, count);
 printf("Total  A in this sentence:");
 for (i = 0 ; i < 1 ; i++)
 printf("%c \t %d\n", i , count[i]);
 return 0;
}
void find_frequency(char s[], int count[]) {
 int c = 0;
 while (s[c] != '\0') {
 if (s[c] >= 'A')
 count[s[c]-'A']++;
 c++;
 }
}
