#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double keliling, luas;

    if (scanf("%lf %lf", &a, &b) == 2) {
        c = sqrt((b * b) - (a * a));
        keliling = a + b + c;
        luas = 0.5 * c * a;

        printf("Alas = %.0f cm\n", c);
        printf("Tinggi = %.0f cm\n", a);
        printf("Keliling = %.0f cm\n", keliling);
        printf("Luas = %.0f cm^2\n\n", luas);
    }

    scanf("%lf", &a);
    scanf("%lf", &b);

    c = sqrt((b * b) - (a * a));
    keliling = a + b + c;
    luas = 0.5 * c * a;

    printf("Alas = %.0f cm\n", c);
    printf("Tinggi = %.0f cm\n", a);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);

    return 0;
}