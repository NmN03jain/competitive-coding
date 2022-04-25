#include<stdio.h>
int main(){
    int t,n,k,m[100],i,change,j;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++){
            scanf("%d",&m);
        }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (m[j] > m[j + 1])
            {
                change = m[j];
                m[j] = m[j + 1];
                m[j + 1] = change;
            }
        }
    }
    
    for (i = 0; i < k; i++)

    {
        printf("%d ", m[i]);
    }



    }
return 0;
}