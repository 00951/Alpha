/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    long long a,b,cs=0,T;
    scanf("%lld",&T);
    while(T--){
            cs++;
        scanf("%lld %lld", &a, &b);
        printf("Case %lld: %lld\n",cs,a+b);
    }
    return 0;
}
