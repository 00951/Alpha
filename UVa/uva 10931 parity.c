/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    long long T,n,i,l,arr[100000],c;
    while(scanf("%lld", &n)==1 && n!=0){

        c=0;l=0;
        while(n!=0){
            if(n%2==1)
                c++;
            arr[l]=n%2;
            l++;
            n/=2;
        }

        printf("The parity of ");
        for(i=l-1; i>=0; i--){
            printf("%lld", arr[i]);
        }
        printf(" is %lld (mod 2).\n", c);
    }
    return 0;
}
