#include <stdio.h>
int main()
{
    int i, potega, do_jakiej_potegi;
    printf("Podaj do jakiej potegi: ");
    scanf("%i", &do_jakiej_potegi);
    potega = 1;
    i = 1;
    while (i <= do_jakiej_potegi)
    {
        potega = potega * 2;
        printf("%i\n", potega);
        i = i + 1;
    }
    return 0;
}
