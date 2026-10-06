#include <stdio.h>

int main() {

    int A = 400000;
    int B = 350000;
    int DiskonA;
    int DiskonB;
    int HargaA;
    int HargaB;

    DiskonA = (A * (13.0 / 100));
    DiskonB = (B * (21.0 / 100));
    HargaA = (A - DiskonA);
    HargaB = (B - DiskonB);

    printf("Harga Sepatu A adalah %d\n", A);
    printf("Harga Sepatu B adalah %d\n", B);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", HargaA);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", HargaB);

    return 0;
}