#include <stdio.h>
int main(){
    int ar[8];
    int size = sizeof(ar) / sizeof(int);
    printf("%d", size);

    return 0;
    }