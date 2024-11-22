#include <stdio.h>
int main()
{
    int i, potega, do_jakiej_potegi;
    printf("Podaj do jakiej potęgi: ");
    scanf("%i", &do_jakiej_potegi);
    potega = 1;
    i = 1;
    while (i <= do_jakiej_potegi)
    {
        printf("%i\n", potega);
        potega = potega * 2;
        i = i + 1;
    }
    return 0;
}
