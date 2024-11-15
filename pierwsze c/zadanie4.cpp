#include <stdio.h>
int main()
{
int i,n,liczba_parzysta;
printf("Podaj ilosc elementow ciagu do wyswietlenia: ");
scanf("%i",&n);
liczba_parzysta = 2;
i = 0;
while(i<n)
{
printf("%i",liczba_parzysta); putchar('\n');
liczba_parzysta = liczba_parzysta + 2;
i = i + 1;
}
return 0;
}