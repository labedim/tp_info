#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include <stdio.h>
#include <stdlib.h>

int main() {
    int tableau[2][3] = {{13, 17, 19}, {17, 110, 67}};
    int max = tableau[0][0];
    int min = tableau[0][0];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (tableau[i][j] > max) {
                max = tableau[i][j];
            }
            if (tableau[i][j] < min) {
                min = tableau[i][j];
            }
        }
    }

    printf("Le maximum est %d\n", max);
    printf("Le minimum est %d\n", min);

    return 0;
}

