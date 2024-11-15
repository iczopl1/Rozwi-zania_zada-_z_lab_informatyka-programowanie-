#include <stdio.h>
int main()
{
    char znak;
    printf("Podaj znak: ");
    znak = getchar();
    if (znak >='A' && znak <='Z')
    {
        printf("Wpisales BIG letter\n");
        return 0;
    }
    if (znak >='a' && znak <='b')
    {
        printf("Wpisales małą litere\n");
        return 0;
    }
    printf("Znak nie jest literą\n");
    return 0;
}
