#include<stdio.h>

int main()
{
    int i;
    for (i=1; i <= 10; i++){
        if (i % 2 == 0)
        {
           printf("%d - Even number\n", i);
        }
        else
        {
             printf("%d - Odd number\n", i);
        }
        
    }

    return 0;
}