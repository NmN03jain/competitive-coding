#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        if(n%4==0){
            printf("%d",n/4);
        }
        else{
            printf("%d",(n/4)+1 );
        }
    }
    
return 0;
}