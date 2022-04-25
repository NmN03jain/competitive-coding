#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int N, K;
	    scanf("%d %d", &N, &K);
	    if(N%4==0)
	    {
	        if(K==0) printf("off\n");
	        else printf("on\n");
	    }
	    else if(N%4!=0 && K==0) printf("on\n");
	    else if(N%4!=0 && K==1) printf("ambiguous\n");
	    
	}
	return 0;
}