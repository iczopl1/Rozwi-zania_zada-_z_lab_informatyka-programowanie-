#include <stdio.h>
int main()
{
    int i, potega, li_p;
    printf("Podaj do jakiej potęgi: ");
    scanf("%i", &li_p);
    potega = 1;
    i = 1;
    while (i <= li_p)
    {
        printf("%i\n", potega);
        potega = potega * 2;
        i = i + 1;
    }
    return 0;
}