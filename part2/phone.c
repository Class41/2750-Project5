//# Vasyl Onufriyev
//# CS2750 PA5
//# 10-24-18

#include <stdio.h>
#include "phone_fmt.h"

int main()
{
   printf("input a telephone number as a string containing a three-digit \
   area code, followed by a seven-digit number\n\n"); //prompt user

   char input[201]; //input buffer for user input
   printf("•Input: ");

   scanf("%s", input); //get user input + store into input buffer array
   
   int i = 0; //iterator declaration

   char phvalues[10]; //holds first 10 digits detected
   int phcnt = 0; //keeps track of # of digits in the above array;

   while(input[i] != '\0' && phcnt <= 9)
   {
      if(isdigit(input[i])) //check if this position is a digit
      {
         phvalues[phcnt] = input[i]; //add it to the phone number array
         phcnt++; //incriment the total digits stored in the array
      }
      i++; //increment the iterator
   }

   if(phcnt < 9) //if the user did not put at least 10 digits into the input
   {
      puts("Output: ERROR: Not enough digits on input!");
      return 1;
   }

   phone_fmt(phvalues); //got at least 10 digits, send to format
   
   return 0;
}
