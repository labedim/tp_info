#include <stdio.h>
#include <stdlib.h>

int main()
{
    char message[1000];
int decalage ;
  printf("Entrez le message clair: ");
  scanf("%s", &message);



printf("Entrez le décalage (un entier positif) : ");
 scanf("%d", &decalage);

for (int i = 0; message[1] != '\0'; i++) {

message[i] +=decalage;
}
 printf("Message chiffre %s\n", message);
return 0;
}
