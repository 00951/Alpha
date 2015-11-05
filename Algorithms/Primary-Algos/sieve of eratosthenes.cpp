/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

#define MAX 20000007

int arr[MAX];
int n,i,j;

//********************************//

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

//********************************//

int main()
{
    sieve();

    while(scanf("%d", &n)==1){
        
        if(arr[n]==0)
            printf("Prime\n");
        else if(arr[n]==1)
            printf("Not Prime\n");
        
    }
    return 0;
}
