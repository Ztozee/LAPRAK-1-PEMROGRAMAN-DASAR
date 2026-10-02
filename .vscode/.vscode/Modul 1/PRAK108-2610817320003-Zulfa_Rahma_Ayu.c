#include <stdio.h>
#include <math.h>

int main() {

    int Putaran = 5;
    int Jarak = 14;
    float Keliling = (float)Jarak / Putaran;
    float Jari_Jari = Keliling / (2 * M_PI);
    
    printf("Diketahui : \n");
    printf("Pak Dengklek mengelilingi taman = %d putaran\n", Putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n", Jarak);
    printf("\n");
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", Jari_Jari);

    return 0;

}