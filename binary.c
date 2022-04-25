#include <stdio.h>
int BS(int Arr[], int Size, int Key)
{
    int start = 0;
    int end = Size-1;
   
    while(start <=end){
    int mid = end + (start-end)/2;
        
            if(Arr[mid]==Key){
                return mid;
            }
            else if(Key>Arr[mid]){
               start = mid+1;
            }
            else{
                end = mid-1;
            }

        }
     return -1;  
}

int main() {
    // binary search 
    int Arr[8]={2,4,6,8,10,12,14,16};
    int Key = 14;
    int Answer = BS(Arr,8,Key);
    printf("\n%d",Answer);
	return 0;
}