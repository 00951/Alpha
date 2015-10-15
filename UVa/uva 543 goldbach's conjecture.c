#include <stdio.h>
#include <math.h>
#define MAX 2000000
int arr[MAX];
int n,i,j;

void sieve()
{
    for(i=2; i<=MAX; i++){
        if(arr[i]==0){
            for(j=2*i; j<=MAX; j+=i){
                arr[j]=1;
            }
        }
    }
}


int main()
{
    sieve();

    while(scanf("%d", &n)==1 && n!=0){

        for(i=2; i<=MAX; i++){
            if(arr[i]==0 && arr[n-i]==0)
            {
                printf("%d = %d + %d\n", n, i, n-i);
                break;
            }
        }
    }
    return 0;
}
