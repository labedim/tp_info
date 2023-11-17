#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nombreSecret, nombreUtilisateur, tentativesMax = 5, tentativesRestantes = tentativesMax;
  srand(time(NULL));
  nombreSecret = rand()% 100+1;
  printf("Bienvenue dans le jeu de devinette !\n");
  printf("Devinez le nombre secret entre 1 et 108.\n");
  while (tentativesRestantes > 0) {
  printf("Tentatives restantes: %d\n", tentativesRestantes);
  printf("Entrez votre devinette: ");
  scanf("%d", &nombreUtilisateur);

  if (nombreUtilisateur == nombreSecret) {
  printf("Bravo! Vous avez deviné le nombre secret (%d) en %d tentatives.\n",nombreSecret, tentativesMax - tentativesRestantes + 1);
  break;
  }
     else if (nombreUtilisateur < nombreSecret) {
     printf("Le nombre secret est plus grand. Essayez encore, \n");
     }

     else{
     printf("Le nombre secret est plus petit. Essayez encore.\n");
     }
     tentativesRestantes--;
      }
if (tentativesRestantes == 00){

printf("Désolé, vous avez épuise toutes vos tentatives. Le nombre secret était : %d ", nombreSecret);

}
