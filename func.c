// # Vasyl Onufriyev
// # 2750 PA5
// 10-24-18

#include <string.h>

void dosubcheck(char *val, char **vals, int valsc)
{
   int i;
   for(i = 0; i < valsc; i++)
   {
      if(strpos(val, vals[i]) > 0)
      {
         printf("SUB FOUND");
      }
   }
}
