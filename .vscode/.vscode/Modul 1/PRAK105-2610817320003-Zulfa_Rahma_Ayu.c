#include <stdio.h>

int main() {

    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;
    int mod1;
    int mod2;
    int hasil;

    mod1 = a % b;
    mod2 = x % y;
    hasil = mod1 + mod2;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", hasil);

    return 0;

}