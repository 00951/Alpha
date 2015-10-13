/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>
#define MAX 20000000

int arr[MAX], store[MAX];

int main(){

    int i,j,k,x,count;

        count=0,k=1;

        for(i=2; i<=MAX; i++){

            if(arr[i]==0){
                for(j=2*i; j<=MAX; j+=i){
                    arr[j]=1;
                }
            }

            if(arr[i]==0 && arr[i+2]==0)
                    store[k++]=i;

        }

        while(scanf("%d", &x)==1){
            printf("(%d, %d)\n", store[x], store[x]+2);
        }
    return 0;
}
