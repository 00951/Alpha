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






// ..............................







#include <stdio.h>
#include <string.h>
#define MAX 20000007

int arr[MAX], store[MAX], twin[MAX];


int main(){

    int i,j,k,x,l, count;

        memset(store, 9, sizeof store);

        k=1,l=1;

        for(i=2; i<=MAX; i++){

            if(arr[i]==0){
                for(j=2*i; j<=MAX; j+=i){
                    arr[j]=1;
                }
            }

            if(arr[i]==0){
                store[k]=i; //array of primes
                if(store[k]-store[k-1]==2){
                    twin[l++]=store[k-1];   //array of twin primes
                }
                k++;
            }

        }


        while(scanf("%d", &x)==1){
            printf("(%d, %d)\n", twin[x], twin[x]+2);
        }

    return 0;
}
