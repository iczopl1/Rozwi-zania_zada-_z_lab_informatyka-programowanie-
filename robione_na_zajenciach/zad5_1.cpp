#include <stdio.h>
int main()
{
    int tab[5];
    int i;
    int ile_parzystych = 0;
    printf("Wypelnij tablice: ");
    for (i = 0; i < 5; i++)
    {
        printf("t %i=", i);
        scanf("%i", &tab[i]);
        if (tab[i]>=0 && tab[i]<=22)
        {
            ile_parzystych++;
        }
    }
    printf("W tablicy jest %i liczb od 0 do 22.", ile_parzystych);
    return 0;
}