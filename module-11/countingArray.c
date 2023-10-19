#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }

    int count[100] = {0};
    for (int i = 0; i < n; i++)
    {
        int value = ar[i];
        count[value]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (count[i] != 0)
        {
            printf("%d - %d\n",i,count[i]);
        }
    }
  
    return 0;
}