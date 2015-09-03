/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>
#include <math.h>

int main()
{
    long long x,z;

    while(scanf("%lld", &x)==1){
        z = (x*(x+1))/2;
        printf("%lld\n", z*z);
    }
    return 0;
}
