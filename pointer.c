#include <stdio.h>
#include <string.h>
int main()
{
    int x=10;
    int* p=&x;
    printf("%p",p);
    return 0;
}