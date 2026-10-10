#include <stdio.h>
#include <stdlib.h> 

int main() {
    printf("Test case ke 1\n");
    char nilai1[10];
    char nilai2[10];
    float num1, num2, hasil1;

    printf("Masukkan Nilai Pertama : ");
    fgets(nilai1, sizeof(nilai1), stdin);  
    printf("Masukkan Nilai Kedua : ");
    fgets(nilai2, sizeof(nilai2), stdin);

    num1 = atof(nilai1);
    num2 = atof(nilai2);
    hasil1 = num1 + num2;
    printf("Hasil dari penjumlahan nilai pertama %.2f dan nilai kedua %.2f adalah %.2f\n\n", num1, num2, hasil1);
    
    printf("Test case ke 2\n");
    char nilai3[10];
    char nilai4[10];
    float num3, num4, hasil2;

    printf("Masukkan Nilai Pertama : ");
    fgets(nilai3, sizeof(nilai3), stdin);    
    printf("Masukkan Nilai Kedua : ");
    fgets(nilai4, sizeof(nilai4), stdin);
    num3 = atof(nilai3);
    num4 = atof(nilai4);
    hasil2 = num3 + num4;
    printf("Hasil dari penjumlahan nilai pertama %.2f dan nilai kedua %.2f adalah %.2f\n", num3, num4, hasil2);

    return 0;
}