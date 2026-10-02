#include <stdio.h>
#include <math.h>

int main() {

    int Alas = 5;
    int Tinggi = 12;
    int Miring = (int)sqrt(pow(Alas, 2) + pow(Tinggi, 2));
    int Keliling = Alas + Tinggi + Miring;
    int Luas = (Alas * Tinggi) / 2;

    printf("Diketahui : \n");
    printf("Alas = %d cm\n", Alas);
    printf("Tinggi = %d cm\n", Tinggi);
    printf("\n");
    printf("Jawaban :\n");
    printf("Sisi A = %d cm\n", Alas);
    printf("Sisi B = %d cm\n", Tinggi);
    printf("Sisi C = %d cm\n", Miring);
    printf("Keliling = %d cm\n", Keliling);
    printf("Luas = %d cm\n", Luas);

    return 0;

}