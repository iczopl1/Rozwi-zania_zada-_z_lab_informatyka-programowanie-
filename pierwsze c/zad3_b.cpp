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
    if (znak >='a' && znak <='z')
    {
        printf("Wpisales małą litere\n");
        return 0;
    }
    if (znak >='0' && znak <='9')
    {
        printf("Wpisales cyfrę\n");
        return 0;
    }
    if (znak >=0 && znak <=20)
    {
        printf("Wpisałeś kod sterowania\n");
        return 0;
    }
    printf("Wpisałeś jakiś symbol\n");
    return 0;
}
