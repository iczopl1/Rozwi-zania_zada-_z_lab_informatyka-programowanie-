#include <stdio.h>

int main()
{
    char tekst[32]; // 32 bo to fajna liczba programistyczna
    char litera_szukana;
    int ile_znalazl =0;
    printf("Podaj szukany symbol:\n");
    scanf("%c", &litera_szukana);
    printf("Podaj ciąg znaków:\n");
    scanf("%s", tekst);
    for (int i = 0; tekst[i]!=0 ; i++)
    {
        if (tekst[i] == litera_szukana){
            ile_znalazl++;
        }
    }
    printf("Znaleziono %i wystompien\n", ile_znalazl);

}