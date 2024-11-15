#include <stdio.h>
int main()
{
    float x;
    printf("Podaj liczbe zmienną:");
    scanf("%f", &x);
    if (x >= 2.0 && x < 8.5)
    {
        printf("X należy do przedziału\n");
    }
    else
    {
        printf("X nie należy do przedziału\n");
    }
    return 0;
}