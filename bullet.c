#include <stdio.h>
int main()
{
    int t, x, y, z;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d %d", &x, &y, &z);
        if (y/x <z)
        {
            printf("%d\n",z-(y/x));
        }else{
            printf("0\n");
        }
    }

    return 0;
}
