#include<stdio.h>
int main(){
int t,x;
scanf("%d",&t);
while(t--){
    int size = 'n';
    x = 1;
    scanf("%d",&x);
    for(int i = 0;i<x;i++){
        if(size =='n'){
            size ='h';
        }
        else if(size =='h'){
            size = 's';
        }
        else if(size =='s'){
            size = 'n';
        }
    }
    if(size =='n'){
        printf("NORMAL");
    }
    else if(size =='h'){
        printf("HUGE");
    }
    else if(size =='s'){
        printf("SMALL");
    }

}
return 0;
}