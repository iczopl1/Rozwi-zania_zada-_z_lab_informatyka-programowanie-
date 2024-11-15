#include <stdio.h>

int silnia(int x){
    int wynik =1;
    for (int i=1;i<=x;i++){
        wynik = wynik*i ;
    }
    return wynik;
}

int main(){
    int a;
    printf("Podaj n\n");
    scanf("%i",&a);
    printf("Silnia z %i wynosi %i\n",a,silnia(a));
    return 0;
}