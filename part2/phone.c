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

   char phvalues[10];
   int phcnt = 0;

   while(input[i] != '\0' && phcnt < 10)
   {
      if(isdigit(input[i]))
      {
         phvalues[phcnt] = input[i];
         phcnt++;
      }
      i++;
   }

   if(phcnt < 9)
   {
      puts("Output: ERROR: Not enough digits on input!");
      return 1;
   }

  puts(phvalues); 
   
   return 0;
}
