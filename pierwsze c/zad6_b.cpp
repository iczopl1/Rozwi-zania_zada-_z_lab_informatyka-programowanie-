#include <stdio.h>

int main()
{
    char slowo[32]; // 32 bo to fajna liczba programistyczna
    char litera_szukana;
    int ile_znalazl =0;
    printf("Podaj szukany symbol:\n");
    scanf("%c", &litera_szukana);
    printf("Podaj ciąg znaków:\n");
    scanf("%s", &slowo);
    for (int i = 0; i < 32; i++)
    {
        //obsługa tablicy zawsze na kńcu znak 0 bo jak nie to liczy głupoty bez tego
        if (slowo[i] == 0)
        {
            break;
        }
        if (slowo[i] == litera_szukana){
            ile_znalazl++;
        }
    }
    printf("Znaleziono %i wystompien\n", ile_znalazl);

}
