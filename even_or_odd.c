
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    
    if(n % 2 == 0) {
        printf("%d est un nombre pair.\n", n);
    } else {
        printf("%d est un nombre impair.\n", n);
    }

    return 0;
}