#include <stdio.h>
int main()
{
   int x, y;
   printf("Podaj liczbe calkowitą pierwszą:");
   scanf("%i", &x);
   printf("Podaj liczbe calkowitą pierwszą:");
   scanf("%i", &y);
   printf("Suma: %i \n", x + y);
   printf("różnica: %i \n", x - y);
   printf("iloczyn: %i \n", x * y);
   if (y != 0)
   {
      printf("iloraz: %i \n", 1.0*x / y);
      printf("iloraz: %i \n", x % y);
   }
   else
   {
      printf("Nie dziel przez 0\n");
   }

   return 0;
}