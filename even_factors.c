#include <stdio.h>
int main()
{
    int t, num, i, count = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &num);
        for (i = 2; i <= num; i++)
        {
            if (num % i == 0 && i % 2 == 0)
            {
                count += i;
            }
        }
        printf("%d", count);
    }

    return 0;
}