#include <stdio.h>
int main()
{
    int t, x, y;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &x, &y);
        if (y > x)
        {
            printf("%d ",x);
            printf("%d ", y-x);
        }
    }
    return 0;
}