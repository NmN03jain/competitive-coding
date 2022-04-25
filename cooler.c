#include <stdio.h>
int main(){
    int t, x, y, rent;
    scanf("%d", &t);
    while (t--){
        scanf("%d%d", &x, &y);
        if(y%x==0){
            printf("%d",(y/x)-1);
        }
        else{
            printf("%d",(y/x));
        }

       
           
        }
    
    return 0;
}