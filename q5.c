#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n & 1) {
        printf("%d is odd\n", n);
    } else {
        printf("%d is even\n", n);
    }

    if (n > 0 && (n & (n - 1)) == 0) {
        printf("%d IS a power of two\n", n);
    } else {
        printf("%d is NOT a power of two\n", n);
    }

    return 0;
}
