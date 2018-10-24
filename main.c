// # Vasyl Onufriyev
// # CS2750 PA 5
// # 10-24-18

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"

int main(int argc, char **argv)
{
   int i;
   int total = 0;
   
   int indicies[200];
   int indiciesc = 0;

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
       else
       {
         indicies[indiciesc] = i;
         indiciesc++;
       }
   }

   for(i = 0; i < indiciesc; i++)
   {
      dosubcheck(argv[idicies[i]], argv, argc);
   }



   printf("\nTotal: %d", total);
   return 0;
}
