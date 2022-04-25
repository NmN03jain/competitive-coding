#include<stdio.h>
#include <string.h>
int main(){
char r[20];
scanf("%s",r);

if(strcmp(r,"RED")==0){
    printf("1");
}
else if(strcmp(r,"ORANGE")==0){
    printf("2");
}
else if(strcmp(r,"YELLOW")==0){
    printf("3");
}
else if(strcmp(r,"GREEN")==0){
    printf("4");
}
else if(strcmp(r,"BLUE")==0){
    printf("5");
}
else if(strcmp(r,"INDIGO")==0){
    printf("6");
}
else if(strcmp(r,"VIOLET")==0){
    printf("7");
}
else{
    printf("NA");
}
return 0;
}