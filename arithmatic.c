#include<stdio.h>

int main(){
    int a=10, b=20;
    int sum = a + b;
    int mns = b - a;
    int mlt = a * b;
    int dvd = a / b;
    int mod = b % a; 

    printf("%d, %d, %d, %d, %d", sum, mns, mlt, dvd, mod);
    return 0;
}