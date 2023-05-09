#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
   int str[11], i, n;
   str[0] = 0;
   int max = 0;

   for (i = 1; i < 10; i++)
   {
      scanf("%d", &str[i]);
      if (max < str[i])
      {
         max = str[i];
         n = i;
      }
   }
   printf("%d\n%d", max, n);
   return 0;
}