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
    int x;
    int flag = 0;
    scanf("%d",&x);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] + ar[j] == x)
            {
                flag = 1;
            }           
        }      
    }
    if (flag == 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("Yes\n");
    }
    
      
    return 0;
}