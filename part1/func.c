//# Vasyl Onufriyev
//# CS2750 PA5
//# 10-24-18

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void dosubcheck(char *val, char **vals, int startpos, int valsc)
{
   int i; //iterator
   for(i = startpos; i < valsc; i++) //check onwards from curpos + 1
   {
      if(strstr(vals[i], val) != NULL) //check for substring
      {
         printf("\n%s is a substring of %s", val, vals[i]); //display msg
      }
   }
}
