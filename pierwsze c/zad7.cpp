// Biorąc na wzór program omówiony w punkcie 1.14 (str. 12), opracować własny, wyszukujący
// w dwuwymiarowej tablicy liczbę nieujemnych i ujemnych wartości.
// zad na s19
#include <stdio.h>


// 0 traktuje jako liczbę nie należącą do żadnego przedziału
int main()
{
    float tab[2][3] =
    {
        {2.0, 8.5, -12.0},
        {-23.3, 10.23, 3.44}};
    int i, j;
    int ile_ujemnych = 0, ile_nieujemnych = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (tab[i][j] > 0)
            {
                ile_nieujemnych++;
            }
            if (tab[i][j] < 0)
            {
                ile_ujemnych++;
            }
        }
    }
    printf("Znaleziono %i liczb ujemnych\n",ile_ujemnych);
    printf("Znaleziono %i liczb nieujemnych\n",ile_nieujemnych);
}