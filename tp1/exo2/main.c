#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_1,num_2,somme;
    printf("Donnez le premier nombre : ");
    scanf("%d",&num_1);

    printf("Donnez le deuxieme nombre : ");
    scanf("%d",&num_2);

    somme=num_1+num_2;

    printf("la somme de %d + %d est %d " , num_1,num_2,somme);
}
