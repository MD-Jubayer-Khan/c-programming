#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    int minIdx = 0, maxIdx = 0;

    for (int i = 1; i < n; i++) {
        if (ar[i] < ar[minIdx]) {
            minIdx = i;
        }
        if (ar[i] > ar[maxIdx]) {
            maxIdx = i;
        }
    }

    int temp = ar[minIdx];
    ar[minIdx] = ar[maxIdx];
    ar[maxIdx] = temp;

    for (int i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }

    return 0;
}
