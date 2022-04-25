#include <stdio.h>
int main()
{
    int t, n, i, temp = 0, temp1 = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 1; i < n; i++)
        {
            if (a[i] < a[temp])
            {
                temp = i;
            }
            else if (a[i] == 1)
            {
                temp = i;
            }
        }
        for (i = 1; i < n; i++)
        {
            if (a[i] > a[temp1])
            {
                temp1 = i;
            }
            else if (a[i] == 1)
            {
                temp1 = i;
            }
        }
        printf("%d\n", a[temp1] - a[temp]);
    }
    return 0;
}