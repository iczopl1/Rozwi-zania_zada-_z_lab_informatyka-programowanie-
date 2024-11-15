#include <stdio.h>
int main()
{
int tab[5];
int i;
int ile_parzystych=0;
printf("Wypelnij tablice: \n");
for(i=0;i<5;i++)
{
printf("t %i=",i);
scanf("%i",&tab[i]);
if(tab[i]%2 == 0)
{
ile_parzystych++;
}
}
printf("W tablicy jest %i liczb parzystych.", ile_parzystych);
return 0;
}