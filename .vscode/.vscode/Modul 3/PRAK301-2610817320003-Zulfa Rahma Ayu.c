#include <stdio.h>

int main() {
    int a, b;
    
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &a, &b);
        
        if (a <= b) {
            printf("%d %d\n\n", a, b);
        } else {
            printf("%d %d\n\n", b, a);
        }
    }
    
    return 0;
}