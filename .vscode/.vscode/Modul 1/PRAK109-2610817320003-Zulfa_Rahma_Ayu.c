#include <stdio.h>

int main() {

    int Pahlawan = 5;
    int Pasukan_Yu_Zhong = 958730;
    int Pasukan_Yang_Harus_Dikalahkan_Pahlawan = Pasukan_Yu_Zhong / Pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", Pasukan_Yu_Zhong);
    printf("Jumlah pahlawan = %d\n", Pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", Pasukan_Yang_Harus_Dikalahkan_Pahlawan);

    return 0;

}