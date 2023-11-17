#include <stdio.h>

// Fonction pour calculer le PGCD de deux nombres a et b
int pgcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Fonction pour calculer les coefficients x et y tels que ax + by = PGCD(a, b)
void euclideanExtended(int a, int b, int *x, int *y) {
    if (b == 0) {
        *x = 1;
        *y = 0;
    } else {
        int x1, y1;
        euclideanExtended(b, a % b, &x1, &y1);
        *x = y1;
        *y = x1 - (a / b) * y1;
    }
}

int main() {
    // Déclaration des variables
    int a, b, x, y;

    // Demande à l'utilisateur d'entrer les valeurs de a et b
    printf("Entrez la valeur de a : ");
    scanf("%d", &a);

    printf("Entrez la valeur de b : ");
    scanf("%d", &b);

    // Calcul du PGCD
    int gcd = pgcd(a, b);

    // Calcul des coefficients x et y
    euclideanExtended(a, b, &x, &y);

    // Affichage du résultat
    printf("Les coefficients x et y tels que %d * %d + %d * %d = PGCD(%d, %d) sont :\n", a, x, b, y, a, b);
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
