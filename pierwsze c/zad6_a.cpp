#include <stdio.h>

/**
 * Funkcja zwraca odpowiednio znak dla danej grupy znaków dla małych liter a a dla Durzych liter A itp by można to było łatwo liczyć
 * 
 * @param znak Jakiś znak.
 * 
 * @return Zwraca pierwszy znak tego typu z tab ascii.
 */
char analiza_znaku(char znak)
{
    if (znak >= 'A' && znak <= 'Z')
    {
        return 'A';
    }
    if (znak >= 'a' && znak <= 'z')
    {
        return 'a';
    }
    if (znak >= '0' && znak <= '9')
    {
        return '0';
    }
    return '{';
}

int main()
{
    char slowo[32]; // 32 bo to fajna liczba programistyczna
    int ile_B = 0, ile_s = 0, ile_liczb = 0, ile_symbol = 0;
    printf("Podaj ciąg znaków:\n");
    scanf("%s", &slowo);
    for (int i = 0; i < 32; i++)
    {
        //obsługa tablicy zawsze na kńcu znak 0 bo jak nie to liczy głupoty bez tego
        if (slowo[i] == 0)
        {
            break;
        }
        switch (analiza_znaku(slowo[i]))
        {
        case 'a':
            ile_s++;
            break;
        case 'A':
            ile_B++;
            break;
        case '0':
            ile_liczb++;
            break;
        case '{':
            ile_symbol++;
            break;
        default:
            printf("Flow overflow ktoś miesza w programie(how you did this)");
            break;
        }
    }
    printf("Znaleziono %i liter małych\n", ile_s);
    printf("Znaleziono %i liter DUŻYCH\n", ile_B);
    printf("Znaleziono %i liter liczb\n", ile_liczb);
    printf("Znaleziono %i liter symbloi\n", ile_symbol);
}
