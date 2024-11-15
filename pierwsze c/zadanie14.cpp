#include <stdio.h>
// tu wstaw definicję funkcji sumuj_parzyste
int sumuj_parzyste(int tab[2][4])
{
    int suma = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (tab[i][j] % 2 == 0)
            {
                suma = suma + tab[i][j];
            }
        }
    }

    return suma;
}

int main()
{
    int tab[2][4];
    int suma;
    printf("Wypelnij tablice 2D o wymiarach 2x4.\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Podaj liczbe [%i][%i]: ", i, j);
            scanf("%i", &tab[i][j]);
        }
    }
    suma = sumuj_parzyste(tab);
    printf("Suma parzystych elementow = %i", suma);
    return 0;
}