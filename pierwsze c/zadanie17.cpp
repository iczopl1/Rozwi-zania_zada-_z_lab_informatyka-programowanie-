#include <stdio.h>

struct Trapez // definicja struktury
{
    float podstawa1;
    float podstawa2;
    float wysokosc;
};

void porownanie_trapezow(Trapez a[5])
{
    float pole_a[5];
    float pole_max;
    int ktory =0;
    // pole = ((a+b)*h)/2 wzór na pole trapezu
    for (int i = 0; i < 5; i++)
    {
        pole_a[i] = ((a[i].podstawa1 + a[i].podstawa2) * a[i].wysokosc) / 2;
    }
    pole_max = pole_a[0];
    for (int i = 0; i < 5; i++)
    {
        if (pole_a[i] > pole_max)
        {
            pole_max = pole_a[i];
            ktory =i;
        }
    }
    printf("Największe pole ma trapez %i",ktory+1);
}

int main()
{
    Trapez a[5];
    for (int i = 0; i < 5; i++){
    printf("Podaj dane trapezu %i odzielone spacjami\n",i+1);
    scanf("%f", &a[i].podstawa1);
    scanf("%f", &a[i].podstawa2);
    scanf("%f", &a[i].wysokosc); 
    }
    porownanie_trapezow(a);
    return 0;
}