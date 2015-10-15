
/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>
#include <math.h>
#define MAX 2000000
int arr[MAX];
int n,i,j;

void sieve()
{
    arr[0]=1; arr[1]=1;
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
    int flag=1;

    while(scanf("%d", &n)==1 && n!=0){
            flag=1;
        for(i=2; i<=n; i++){

            if(arr[i]==0 && arr[n-i]==0)
            {
                    flag=0;
                    printf("%d:\n%d+%d\n", n, i, n-i);
                    break;
                }
        }
        if(flag==1)
            printf("%d:\nNO WAY!\n", n);
    }
    return 0;
}
