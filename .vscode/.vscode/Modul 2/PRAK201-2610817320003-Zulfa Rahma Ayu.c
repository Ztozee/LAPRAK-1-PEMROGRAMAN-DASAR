#include <stdio.h>

int main() {
    printf("Input\n");
    char nama[100];
    char nim[100];
    char kls_prl[100];
    char ttl[100];
    char alamat[200];
    char hobby[100];
    char no_hp[100];

    printf("Nama                   : ");
    fgets(nama, sizeof(nama), stdin);
    printf("NIM                    : ");
    fgets(nim, sizeof(nim), stdin);
    printf("Kelas Paralel          : ");
    fgets(kls_prl, sizeof(kls_prl), stdin);
    printf("Tempat/Tanggal Lahir   : ");
    fgets(ttl, sizeof(ttl), stdin);
    printf("Alamat                 : ");
    fgets(alamat, sizeof(alamat), stdin);
    printf("Hobby                  : ");
    fgets(hobby, sizeof(hobby), stdin);
    printf("No. HP                 : ");
    fgets(no_hp, sizeof(no_hp), stdin);
    printf("\n");
    printf("Output\n");
    printf("Nama                   : %s", nama);
    printf("NIM                    : %s", nim);
    printf("Kelas Paralel          : %s", kls_prl);
    printf("Tempat/Tanggal Lahir   : %s", ttl);
    printf("Alamat                 : %s", alamat);
    printf("Hobby                  : %s", hobby);
    printf("No. HP                 : %s", no_hp);

    return 0;
}