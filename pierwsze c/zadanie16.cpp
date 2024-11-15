#include <stdio.h>

struct Trapez // definicja struktury
{
    float podstawa1;
    float podstawa2;
    float wysokosc;
};

void porownanie_trapezow(Trapez a, Trapez b)
{
    float pole_a, pole_b;
    // pole = ((a+b)*h)/2 wzór na pole trapezu
    pole_a = ((a.podstawa1 + a.podstawa2) * a.wysokosc) / 2;
    pole_b = ((b.podstawa1 + b.podstawa2) * b.wysokosc) / 2;
    if (pole_a > pole_b)
    {
        printf("Pierwszy trapez jest większy.\n");
    }
    else
    {
        printf("Drugi trapez jest większy.");
    }
}

int main()
{
    Trapez a, b;
    printf("Podaj dane trapezu 1 odzielone spacjami\n");
    scanf("%f", &a.podstawa1);
    scanf("%f", &a.podstawa2);
    scanf("%f", &a.wysokosc);
    printf("Podaj dane trapezu 2 odzielone spacjami\n");
    scanf("%f", &b.podstawa1);
    scanf("%f", &b.podstawa2);
    scanf("%f", &b.wysokosc);
    porownanie_trapezow(a, b);
    return 0;
}