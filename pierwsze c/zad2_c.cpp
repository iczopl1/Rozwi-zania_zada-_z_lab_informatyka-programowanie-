#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Podaj liczbe calkowitą pierwszą:");
    scanf("%i", &x);
    printf("Podaj liczbe calkowitą drugą:");
    scanf("%i", &y);
    printf("Podaj liczbe calkowitą trzecią:");
    scanf("%i", &z);
    if (x > y && x > z && x < y + z)
    {
        printf("Można zbudować trujkąt\n");
        return 0;
    }
    if (y > x && y > z && y < x + z)
    {
        printf("Można zbudować trujkąt\n");
        return 0;
    }
    if (z > y && z > x && z < y + x)
    {
        printf("Można zbudować trujkąt\n");
        return 0;
    }
    printf("Nie można zbudować trujkąta\n");
    return 0;
}