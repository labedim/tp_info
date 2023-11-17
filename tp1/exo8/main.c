#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero , factorial=1;
printf( " Donner un nombre :");
scanf("%d", &numero);
for (int i=1 ; i<= numero ; i++){
factorial=factorial*i ;
}
   printf( "le factorial de %d est %d ", numero , factorial);
}
