#include <stdio.h>

// Fonction pour déterminer si a ≡ b (mod n)
int congruents(int a, int b, int n) {
    return (a % n) == (b % n);
}

int main() {
    // Déclaration des variables
    int a, b, n;

    // Demande à l'utilisateur d'entrer les valeurs de a, b et n
    printf("Entrez la valeur de a : ");
    scanf("%d", &a);

    printf("Entrez la valeur de b : ");
    scanf("%d", &b);

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    // Vérification de la congruence et affichage du résultat
    if (congruents(a, b, n)) {
        printf("%d ≡ %d (mod %d) est vrai.\n", a, b, n);
    } else {
        printf("%d ≡ %d (mod %d) est faux.\n", a, b, n);
    }

    return 0;
}
