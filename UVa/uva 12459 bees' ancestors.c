/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    long long n,c;
    while(scanf("%lld", &n)==1){
        long long a=0,b=1;
        if(n==0)
            break;
        int i;
        for(i=1; i<=n; i++){
            c=a+b;
            a=b;
            b=c;
        }
        printf("%lld\n", c);
    }
    return 0;
}
