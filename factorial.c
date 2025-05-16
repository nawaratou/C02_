#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 0) {
        printf("Le factoriel n'est pas défini pour les nombres négatifs.\n");
        return 1;
    }

    long factoriel = 1;
    for (int i = 1; i <= N; i++) {
        factoriel *= i;
    }

    printf("Le factoriel de %d est : %ld\n", N, factoriel);
    return 0;
}