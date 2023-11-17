#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num_1;

    printf("Donnez un nombre : ");
    scanf("%d", &num_1);

    if (num_1 % 2 ==0){
    printf("le nombre  : %d est pair", &num_1);
    }
    else{
    printf("le nombre : %d est impair ",num_1);
    }


}
