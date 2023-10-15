#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arOne[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arOne[i]);
    }

    int m;
    scanf("%d",&m);
    int arTwo[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&arTwo[i]);
    }

    int ans[n+m];
    for (int i = 0; i < n; i++)
    {
        ans[i] = arOne[i];
    }

    int i = n;
    for (int j = 0; j < m; j++)
    {
        ans[i] = arTwo[j];
        i++;
    }   

    for (int i = 0; i < n+m; i++)
    {
        printf("%d ",ans[i]);
    }

    return 0;
}