#include <stdio.h>
int main()
{
    int x;
    printf("Podaj liczbe calkowitą:");
    scanf("%i", &x);
    if (x % 2 == 0)
    {
        printf("Liczba jest parzysta\n");
    }
    else
    {
        printf("Liczba jest nieparzysta\n");
    }
    return 0;
}