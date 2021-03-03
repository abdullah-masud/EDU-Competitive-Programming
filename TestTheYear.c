#include <stdio.h>
int main()
{
   int year;
   scanf("%d", &year);

   // leap year if perfectly visible by 400
   if (year % 400 == 0)
    {
      printf("TRUE\n");
    }

   // not a leap year if visible by 100
   // but not divisible by 400
   else if (year % 100 == 0)
    {
      printf("FALSE\n");
    }

   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0)
    {
      printf("TRUE\n");
    }

   // all other years are not leap year
   else
   {
      printf("FALSE\n");
   }

   return 0;
}
