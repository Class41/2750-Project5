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
      if(strstr(val, vals[i]) > 0)
      {
         printf("\n%s found in %s", val, vals[i]);
      }
   }
}
