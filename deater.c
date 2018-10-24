// # Vasyl Onufriyev
// # CS2750 PA 5
// # 10-24-18

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
   int i;
   int total = 0;

   for(i = 0; i < argc; i++)
   {
      int k = 0;
      int integer = 1;

      while(argv[i][k] != '\0')
      {
         if(!isdigit(argv[i][k]))
         {
            integer = 0;
         }
         k++;
      }

      if(integer == 1)
      {
        total += atoi(argv[i]); 
      }
   }

   printf("\nTotal: %d", total);
   return 0;
}
