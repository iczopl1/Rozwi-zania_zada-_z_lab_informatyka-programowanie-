#include <stdio.h>
// tu wstaw definicję funkcji trojkat_prostokatny
int trojkat_prostokatny(float x, float y, float z)
{
    if (x > y && x > z && x < y + z)
    {
        // x -==c^2
        if (x * x == y * y + z * z)
        {
            printf("Można zbudować trujkąt prostokątny\n");
        }
        return 0;
    }
    if (y > x && y > z && y < x + z)
    {
        // y -==c^2
        if (y * y == x * x + z * z)
        {
            printf("Można zbudować trujkąt prostokątny\n");
        }
        return 0;
    }
    if (z > y && z > x && z < y + x)
    {
        {
            // z -==c^2
            if (z * z == y * y + x * x)
            {
                printf("Można zbudować trujkąt prostokątny\n");
            }
            return 0;
        }
    }
    printf("Nie można zbudować trujkąta\n");
    return 0;
}
int main()
{
    float a, b, c;
    printf("Podaj dlugosc boku pierwszego: ");
    scanf("%f", &a);
    printf("Podaj dlugosc boku drugiego: ");
    scanf("%f", &b);
    printf("Podaj dlugosc boku trzeciego: ");
    scanf("%f", &c);
    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Podano niedodatnia dlugosc przynajmniej jednego boku.");
    }
    else
    {
        trojkat_prostokatny(a, b, c);
    }
    return 0;
}