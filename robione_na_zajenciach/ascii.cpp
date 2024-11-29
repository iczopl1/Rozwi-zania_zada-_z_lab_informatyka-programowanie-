#include <stdio.h>

int main()
{
    int i = 0;
    for (i = 32; i <= 126; i++)
    {
        printf("%c=%i\n",i,i);
    }
    return 0;
}