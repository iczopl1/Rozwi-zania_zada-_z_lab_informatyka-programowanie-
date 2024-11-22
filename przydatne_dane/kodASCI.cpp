#include <stdio.h>
int main()
{
    int i;
    for (i = 32; i <= 127; i++)
    {
        printf("Znak %c = %i\n", i, i);
    }
    return 0;
}