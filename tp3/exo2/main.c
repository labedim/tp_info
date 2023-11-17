#include <stdio.h>
#include <stdlib.h>

int main()
{
   char mot_de_passe[50];
int longueur  , majuscule= 0, minuscule = 0 , chiffre = 0 , special = 8;

 printf("Entrez un mot de passe: ");
 scanf("%s",&mot_de_passe);
  longueur = strlen(mot_de_passe);

  for(int i = 0; i<longueur; i++){
    if (isupper (mot_de_passe[i])){
    majuscule = 1;
    }

    if (islower (mot_de_passe [i])) {
    minuscule = 1;
      }

    if (isdigit(mot_de_passe [i])){
    chiffre = 1;
      }

  if (strchr ("!@#$%^&()_+[]{}|;':\,.<>?/\\", mot_de_passe[i])) {
  special= 1;
      }
  }


if (longueur >=8 && majuscule && minuscule && chiffre && special ){
printf ("Le mot de passe est securise. \n");
} else {
printf ("Le mot de passe est securise. \n");
printf("raisons : \n");
if (longueur < 8){
    printf("- Le mot de passe doit comporter au moins 8 caracteres .\n");
    }

if(!majuscule){
   printf("- Le mot de passe doit contenir au moins une lettre majuscule .\n");
   }
if(!minuscule){
   printf("- Le mot de passe doit contenir au moins une lettre minuscule .\n");
   }
if(!chiffre){
   printf("- Le mot de passe doit contenir au moins un chiffre .\n");
   }
if(!special){
   printf("- Le mot de passe doit contenir au moins un caractere special .\n");
   }
}


return 0 ;
}
