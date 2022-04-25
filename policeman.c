#include<stdio.h>
#include<stdlib.h>
int main(){
int t,x,y;
scanf("%d",&t);
while(t--){
    scanf("%d%d",&x,&y);
    printf("%d\n",abs(x-y));
}
return 0;
}