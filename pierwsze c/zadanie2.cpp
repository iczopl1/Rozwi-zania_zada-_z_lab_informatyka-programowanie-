#include <stdio.h>
int main()
{
    float x, y;
    printf("Podaj liczbe zmiennoprzecinkowa:");
    scanf("%f", &x);
    if (x >= 0.0)
    {
        y = x;
    }
    else
    {
        y = -x;
    }
    printf("Wartosc bezwzgledna z wprowadzonej liczby wynosi: %g \n", y);
    return 0;
}