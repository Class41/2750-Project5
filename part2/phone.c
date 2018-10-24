//# Vasyl Onufriyev
//# CS2750 PA5
//# 10-24-18

#include <stdio.h>
#include "phone_fmt.h"

int main()
{
   char input[200];
   printf("Input: ");

   scanf("%s", input);
   
   int i = 1;

   int phvalues[10];
   int phcnt = 0;

   while(input[i] != '\0')
   {
      if(isdigit(input[i]))
      {
         if(phcnt >= 9)
            break;

         phvalues[phcnt] = input[i];
         phcnt++;
      }
      i++;
   }

   if(phcnt < 9)
   {
      puts("Output: ERROR: Not enough digits on input!");
   }

   return 0;
}
