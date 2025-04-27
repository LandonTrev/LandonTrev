#include <stdio.h>
 int main() {
   int leap_year;

     //Sets up input for year
     printf(" Please enter the year here: ");
     scanf("%d", &leap_year);

     //If the year is divisible by 4, it could be a leap year.
     //If the year is not divisible by 100, then it is a leap year.
     //If the year is divisible by 100, it must also be divisible by 400 to be a leap year.
     if ((leap_year % 400 == 0) || ((leap_year % 4 == 0) && (leap_year % 100 != 0))) {
         printf("It is a leap year.\n");
     } else {
         printf( "It is not a leap year.\n");
     }
     return 0;

 }
