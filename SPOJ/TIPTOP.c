/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <stdio.h>
#include <math.h>

int main()
{
    long long T,n,cs=0,x;
    scanf("%lld",&T);
    while(T--){
            cs++;
        scanf("%lld",&n);
        x=sqrt(n);
        if(x*x==n)
            printf("Case %lld: Yes\n",cs);
        else
            printf("Case %lld: No\n", cs);
    }
    return 0;
}
