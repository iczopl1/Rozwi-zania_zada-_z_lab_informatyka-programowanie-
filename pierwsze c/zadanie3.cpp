#include <stdio.h>
int main()
{
    char znak;
    printf("Podaj znak: ");
    znak = getchar();
    if (znak == 'a')
    {
        printf("Wpisales litere a.");
    }
    else
    {
        printf("Wpisales litere inna niz a.");
    }
    return 0;
}
