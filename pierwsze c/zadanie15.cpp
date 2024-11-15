#include <string.h>
#include <stdio.h>
struct Osoba // definicja struktury
{
    char imie[100];
    int wiek;
    //dodanie wzrost
    float wzrost;
};
int main()
{
    struct Osoba ania = {"Ania", 35,160};
    struct Osoba beata;
    struct Osoba nieznana;
    // wprowadzanie i wczytywanie danych
    strcpy(beata.imie, "Beata");
    beata.wiek = 32;
    //dodane
    beata.wzrost = 140;
    printf("Podaj imie: ");
    scanf("%s", nieznana.imie); // uwaga: wczytując tekst scanfem piszemy
    printf("Podaj wiek: "); //%s i nie piszemy & przed nazwą zmiennej
    scanf("%i", &nieznana.wiek);
    //dodane 
    printf("Podaj wzrost: "); 
    scanf("%f", &nieznana.wzrost);
    // wypisywanie danych
    printf("Pola bazy:\n");
    printf("%s", ania.imie); // wypisując tekst printfem również piszemy %s
    printf(" %i", ania.wiek);
    printf(" %f", ania.wzrost);
    putchar('\n');
    printf("%s", beata.imie);
    printf(" %i", beata.wiek);
    printf(" %f", beata.wzrost);
    putchar('\n');
    printf("%s", nieznana.imie);
    printf(" %i", nieznana.wiek);
    printf(" %f", nieznana.wzrost);
    return 0;
}