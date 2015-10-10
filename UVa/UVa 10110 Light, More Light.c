
/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <stdio.h>
#include <math.h>

int main()
{
    long long n,x;

    while(scanf("%lld", &n)==1 && n!=0){

        x=sqrt(n);

        if(x*x==n)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
