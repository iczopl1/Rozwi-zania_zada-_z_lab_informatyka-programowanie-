#include <stdio.h>

int main()
{
    char tab[100];
    int i = 0;
    int ilosc_liter_malych = 0, ilosc_liter_duzych = 0, ilosc_liczb = 0, ilosc_znakow_specialnych = 0;
    char znak;
    scanf("%s", &tab);
    while (true)
    {
        if (tab[i] == 0)
        {
            break;
        }
        znak = tab[i];
        if (znak >= 'A' && znak <= 'Z')
        {
            ilosc_liter_duzych++;
        }
        else if (znak >= 'a' && znak <= 'z')
        {
            ilosc_liter_malych++;
        }
        else if (znak >= '0' && znak <= '9')
        {
            ilosc_liczb++;
        }
        else
        {
            ilosc_znakow_specialnych++;
        }
        i++;
    }
    printf("Ilość znaków DUŻYCH: %i\n", ilosc_liter_duzych);
    printf("Ilość znaków małych: %i\n", ilosc_liter_malych);
    printf("Ilość znaków liczbowych: %i\n", ilosc_liczb);
    printf("Ilość znaków znaków specialnch: %i\n", ilosc_znakow_specialnych);
    return 0;
}