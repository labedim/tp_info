#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
int jour =(rand () % 7) + 1 ;
     switch(jour) {
        case 1:
        printf("Samedi");
        break;
        case 2:
        printf("Dimanche");
        break;
        case 3:
        printf("Lundi");
        break;
        case 4:
        printf("Mardi");
        break;
        case 5:
        printf("Mercredi");
        break;
        case 6:
        printf("Jeudi");
        break;
        default:
        printf("Vendredi");
        break;
   }
}
