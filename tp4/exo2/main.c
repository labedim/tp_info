#include <stdio.h>

// Fonction pour trouver tous les entiers b congruents à a modulo n
void congruentsInRange(int a, int n) {
    printf("Les entiers b congruents à %d (mod %d) dans l'intervalle [0, %d] sont :\n", a, n, n - 1);

    for (int b = 0; b < n; ++b) {
        if ((a % n) == (b % n)) {
            printf("%d ", b);
        }
    }

    printf("\n");
}

int main() {
    // Déclaration des variables
    int a, n;

    // Demande à l'utilisateur d'entrer les valeurs de a et n
    printf("Entrez la valeur de a : ");
    scanf("%d", &a);

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    // Recherche et affichage des entiers b congruents à a modulo n dans l'intervalle [0, n-1]
    congruentsInRange(a, n);

    return 0;
}
