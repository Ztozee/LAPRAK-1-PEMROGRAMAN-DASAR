#include <stdio.h>

int main() {

    int a = 4;
    int b = 5;
    int c = 7;
    int keliling_tanah = 16;
    int harga_tanah = 85000;
    int biaya_modal;

    biaya_modal = keliling_tanah * harga_tanah;

    printf("Diketahui : \n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling_tanah);
    printf("Harga Tanah Per Meter adalah %d\n", harga_tanah);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", biaya_modal);

    return 0;

}