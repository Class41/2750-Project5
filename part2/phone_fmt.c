//# Vasyl Onufriyev
//# CS2750 PA5
//# 10-24-18

#include <stdio.h>

void phone_fmt(char *phvals)
{
   printf("Output: (%c%c%c)%c%c%c-%c%c%c%c\n",
         phvals[0],
         phvals[1],
         phvals[2],
         phvals[3],
         phvals[4],
         phvals[5],
         phvals[6],
         phvals[7],
         phvals[8],
         phvals[9]);
}
