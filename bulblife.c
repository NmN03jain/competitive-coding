#include <stdio.h>
#include<stdlib.h>
int main()
{

    int t, n, x, sum, y;
    scanf("%d", t);

    while (t--)
    {
        scanf("%d%d", &n, &x);
        int *a;
        a=(int*)malloc((n-1)*sizeof(int));
        sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            scanf("%d", &a[i]);
            sum = sum + a[i];
        }
        y = n * x - sum;
        if (y > 0)
        {
            printf("%d\n", y);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}