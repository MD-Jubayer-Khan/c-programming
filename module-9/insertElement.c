#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int ar[x+1];
    for (int i = 0; i < x; i++)
    {
        scanf("%d",&ar[i]);
    }
    int p,v;
    scanf("%d %d",&p,&v);
    for (int i = x; i >= p+1; i--)
    {
       ar[i] = ar[i-1];
    }
    ar[p] = v;
    for (int i = 0; i <= x; i++)
    {
        printf("%d ",ar[i]);
    }
    
    
    
    return 0;
}