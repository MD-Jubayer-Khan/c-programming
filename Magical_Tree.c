#include <stdio.h>

int main() {
    int  n;
    scanf("%d", &n);

    int rows = 6 + (n - 1) / 2;
    int stars = n;

    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= (2 * i) - 1; j++) {
            printf("*");
        }
        
        printf("\n");
        
    }
    for (int i = 1; i <= 5; i++) {
        int space = 5;
        for (int j = 1; j <= space; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= stars; j++) {
            printf("*");
            
        }

        printf("\n");
    }

    return 0;
}
