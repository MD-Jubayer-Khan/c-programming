#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int ar[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d",&ar[i]);
    }
    int p;
    scanf("%d",&p);
    for (int i = p; i < x-1; i++)
    {
       ar[i] = ar[i+1];
    }
    for (int i = 0; i < x-1; i++)
    {
        printf("%d ",ar[i]);
    }
    
    return 0;
}