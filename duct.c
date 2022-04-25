#include<stdio.h>
int main(){
int t ,n;
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    if(n%2!=0){
        printf("%d", ((n-1)/2)*2*3)   ;
    }
    else{
        printf("it's to HOT!");
    }
}
return 0;
}