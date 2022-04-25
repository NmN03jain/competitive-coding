#include<stdio.h>
int main(){
    char s[] = "Ind0REinsT'ituTE~~oF@@SCien(E@nDTECHnol0gY";
int count =0,temp ;
while(s[count]!=0){
    count++;
}
for (int i = 0; i < (count-1)/2; i++)
{
    temp = s[i];
    s[i]=s[count-1-i];
    s[count-1-i] = temp;
}
printf("%s",s);

return 0;
}