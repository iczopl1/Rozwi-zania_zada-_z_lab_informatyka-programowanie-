#include <stdio.h>

int main()
{
    float a, s = 0;
    int i = 0;
    printf("Podaj liczbe a: ");
    scanf("%f", &a);
    while (a != 0)
    {
        s = s+ a;
        i++;
        printf("Podaj liczbe a: ");
        scanf("%f", &a);
    }
    if(i==0){
        printf("Brak danych\n");
    }
    else{
        s = s/i;
        printf("S wynosi:%f\n",s);
    }
    return 0;
}