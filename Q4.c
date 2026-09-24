#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double d, root1, root2, root, p, q, x;

    printf("Enter a: ");
    scanf("%lf", &a);

    printf("Enter b: ");
    scanf("%lf", &b);

    printf("Enter c: ");
    scanf("%lf", &c);

    if (a == 0) {
        if (b == 0) {
            printf("Not a valid equation\n");
        } else {
            x = -c / b;
            printf("Linear equation root: x = %.2f\n", x);
        }
    } else {
        d = b * b - 4 * a * c;

        if (d > 0) {
            root1 = (-b + sqrt(d)) / (2 * a);
            root2 = (-b - sqrt(d)) / (2 * a);
            printf("Two real roots: x1 = %.2f, x2 = %.2f\n", root1, root2);
        } else {
            if (d == 0) {
                root = -b / (2 * a);
                printf("One repeated root: x = %.2f\n", root);
            } else {
                p = -b / (2 * a);
                q = sqrt(fabs(d)) / (2 * a);
                printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n", p, q, p, q);
            }
        }
    }

    return 0;
}
