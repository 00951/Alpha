/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

long long main()
{
    long long n,a,i,b,c,arr[100000];

    while(scanf("%lld", &n)==1 && n>=0){
        i=0;
        long long k;

        for(;;){
            a=n%3;
            i++;
            arr[i]=a;
            b=n/3;
            n=b;
            if(n==0)
                break;
        }

        long long j;
        for(j=i; j>=1; j--){
            printf("%lld", arr[j]);
        }

        printf("\n");
    }
    return 0;
}
