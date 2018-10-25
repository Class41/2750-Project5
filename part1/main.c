// # Vasyl Onufriyev
// # CS2750 PA 5
// # 10-24-18

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"

int main(int argc, char **argv)
{
   int i; //iterator
   int total = 0; //integer counter
   
   int indicies[201]; //stores positions of strings
   int indiciesc = 0; //counts number stored in indicies

   for(i = 0; i < argc; i++) //loop through all items in arguments
   {
      int k = 0;
      int integer = 1;

      while(argv[i][k] != '\0')
      {
         if(!isdigit(argv[i][k])) //determine if full arg is numbers only
            integer = 0;

         k++;
      }

      if(integer == 1) //if argv[i] is number only, add it to total count
       { 
        total += atoi(argv[i]);
       }
       else //if not, add to list of things to be checked for substr
       {
         indicies[indiciesc] = i;
         indiciesc++;
       }
   }

   printf("\nTotal integers: %d", total);

   for(i = 0; i < indiciesc; i++) //check all strings for substrings
   {
      dosubcheck(argv[indicies[i]], argv, indicies[i] + 1, argc);
   }

   printf("\n\n"); //just for formatting
   return 0;
}
