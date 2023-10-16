#include <stdio.h>
#include <string.h>
int main()
{
    char ar[20];
    scanf("%s",ar);
    // int count = 0;
    // int i = 0;
    // while (ar[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }
    int count = strlen(ar);

    printf("%d",count);
    
    return 0;
}