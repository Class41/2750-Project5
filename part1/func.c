// # Vasyl Onufriyev
// # 2750 PA5
// 10-24-18

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void dosubcheck(char *val, char **vals, int startpos, int valsc)
{
   int i;
   for(i = startpos; i < valsc; i++)
   {
      if(strstr(vals[i], val) != NULL)
      {
         printf("\n%s is a substring of %s", val, vals[i]);
      }
   }
}
