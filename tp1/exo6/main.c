#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tableau [5]={13,17,19,10,67};
    int indice=1;
    int max=tableau[0];
    int min=tableau[0];

    while (indice < 5){
    if (tableau[indice]>max){
    max=tableau[indice];
    }
    if (tableau[indice]<min){
    min=tableau[indice];
    }

    indice ++;
    }
    printf ("le maximum est %d ",max);
     printf ("le maximum est %d ",min);
