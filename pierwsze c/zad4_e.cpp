#include <stdio.h>
int main()
{
    int i, potega, li_p;
    printf("Podaj do jakiej potęgi: ");
    scanf("%i", &li_p);
    potega = 1;
    for (i = 0; i <= li_p; i++)
    {
        printf("%i\n", potega);
        potega = potega * 2;
    }
    return 0;
}