#include <stdio.h>
#include <string.h>
int main()
{
    char ar[13];
    fgets(ar,13,stdin);
    printf("%s",ar);

    return 0;
}