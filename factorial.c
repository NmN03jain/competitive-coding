#include<stdio.h>
int main()
{
 int i,number;
 long long int fact = 1;
  scanf("%lld",&number);

    for(i=1;i<=number;i++){
        if(number>1){ 
        fact *= i;
        }
        else if(number>120){
            printf("Overflow!");
        }
        else{
            printf("Error!");
        }
  }
  printf("%d", fact);

return 0;
}