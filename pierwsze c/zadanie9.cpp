#include <stdio.h>
// tu wstaw definicję funkcji czy_duza
int czy_duza(char a)
{
    if (a >= 'A' && a <= 'Z')
    {
        return 1;
    }
    return 0;
}
int main()
{
    char tekst[100];
    int i, l_duza, tmp;
    printf("Podaj linie tekstu: ");
    fgets(tekst, 100, stdin);
    l_duza = 0;
    for (i = 0; tekst[i] != 0; i = i + 1)
    {
        tmp = czy_duza(tekst[i]);
        if (tmp == 1)
        {
            l_duza = l_duza + 1;
        }
    }
    printf("W podanym tekscie bylo: ");
    printf("%i", l_duza);
    printf(" duzych liter.");
    return 0;
}