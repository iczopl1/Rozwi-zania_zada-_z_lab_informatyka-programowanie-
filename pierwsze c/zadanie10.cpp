#include <stdio.h>
// tu wstaw definicję funkcji na_duza
char na_duza(char a)
{
    if (a >= 'a' && a <= 'z')
    {
        return a - 32;
    }
    return a;
}

int main()
{
    char tekst[100];
    int i;
    printf("Podaj linie tekstu: ");
    fgets(tekst, 100, stdin);
    for (i = 0; tekst[i] != 0; i = i + 1)
    {
        tekst[i] = na_duza(tekst[i]);
    }
    printf("Tekst po przetworzeniu: ");
    printf("%s", tekst);
    return 0;
}