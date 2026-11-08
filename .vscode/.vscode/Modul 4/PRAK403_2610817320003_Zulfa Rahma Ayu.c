#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    
    while (scanf("%d %d", &a, &b) == 2) {

        int hitung = abs(a - b) + 1;
        int duluan_a = a;
        int duluan_b = b;
        
        for (int i = 0; i < hitung; i++) {
            printf("%d %d", duluan_a, duluan_b);
            
            if (i < hitung - 1) {
                printf(" - ");
            }
            
            if (a < b) {
                duluan_a++;
                duluan_b--;
            } else {
                duluan_a--;
                duluan_b++;
            }
        }
        printf("\n\n");
    }
    
    return 0;
}