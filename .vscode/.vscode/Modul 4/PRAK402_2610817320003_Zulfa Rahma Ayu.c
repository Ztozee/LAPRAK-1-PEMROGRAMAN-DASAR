#include <stdio.h>

int main() {
    int n;
    
    for (int loop = 0; loop < 3; loop++) {
        
        if (scanf("%d", &n) != 1) {
            break; 
        }

        for (int i = 1; i <= n; i += 2) {
            printf("%d", i);
            if (i + 2 <= n) {
                printf(" ");
            }
        }
        printf("\n");

        int start_even = (n % 2 == 0) ? n : n - 1;
        for (int i = start_even; i >= 2; i -= 2) {
            printf("%d", i);
            if (i - 2 >= 2) {
                printf(" ");
            }
        }
        printf("\n\n");

    }

    return 0;
}