#include <stdio.h>
//tu wstaw definicję funkcji f1
float f1(float x){
    if(x<=0){
        return -1;
    }
    if(x<=1){
        return x;
    }
    return 1;
}

int main()
{
float a=-3.0, b=0.45, c=11.0, f1a, f1b, f1c;
f1a=f1(a);
f1b=f1(b);
f1c=f1(c);
printf("\n f1(%f) = %f",a, f1a);
printf("\n f1(%f) = %f",b, f1b);
printf("\n f1(%f) = %f",c, f1c);
return 0;
}