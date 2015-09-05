/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    long long n,ans;

    while(scanf("%lld", &n)==1 && n!=0){

        ans=(n*(n+1)*(2*n+1))/6;

        printf("%lld\n", ans);
    }
    return 0;
}
