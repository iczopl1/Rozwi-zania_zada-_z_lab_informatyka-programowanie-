#include <stdio.h>
// tu wstaw definicję funkcji f_abs to zadanie
float f_abs(float a)
{
    if (a>=0){
        return a;
    }
    else{
        return -a;
    }
}

int main()
{
    float a, w_bz;
    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%f", &a);
    w_bz = f_abs(a);
    printf("|a|=");
    printf("%f", w_bz);
    return 0;
}