#include<stdio.h>

int main()
{
    int i;
    for (i=1; i <= 10; i++){
        if (i % 2 == 0)
        {
           printf("%d - This is an even number\n", i);
        }
        else
        {
             printf("%d - And this is odd number\n", i);
        }
        
    }

    return 0;
}