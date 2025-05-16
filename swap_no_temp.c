#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    printf("avant échange: a=%d b=%d\n", a, b);
    // Méthode d'échange par addition/soustraction
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("Après échange: a = %d, b = %d\n", a, b);
    return 0;
}
