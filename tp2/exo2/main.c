##include <stdio.h>
#include <stdlib.h> \*TP2 EXO2
int somme_tableau_simple(int *tab,int taille){
int i ,somme;
somme=0;
for(i=0;i<taille;i++)
{
somme=tab[i]+somme;
}
printf("%d",somme);
}

int somme_tableau_recurs(int tab[],int taille){
int somme;
if(taille==0){
somme=0;

printf("%d",somme);
}
else{
somme=tab[taille-1]+somme_tableau_recurs(tab,taille-1);
printf("%d",somme);
}
return somme;
}
int main()
{
    int tab[]={0,1,2,3,4};
    int taille=5;
    int result = somme_tableau_recurs(tab,taille);

}
