#include <stdio.h>

int main()
{
    float a, s = 0;
    int i = 0;
    do
    {

        printf("Podaj liczbe a: ");
        scanf("%f", &a);
        s = s + a;
        i++;
    } while (a != 0);
    i --;
    if (i == 0)
    {
        printf("Brak danych\n");
    }
    else
    {
        s = s / i;
        printf("S wynosi:%f\n", s);

        return 0;
    }
}