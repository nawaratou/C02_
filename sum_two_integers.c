#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b); // Pas de printf avant le scanf
    printf("La somme est : %d\n", a + b); // Format exact demandé
    return 0;
}