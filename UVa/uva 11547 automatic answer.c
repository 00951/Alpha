/*
 * GM Arif
 * CSE, Jhangirnagar University
 * id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
 /


#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    long long a,n,tens_dig;
    scanf("%d", &T);

    while(T--){
        scanf("%lld", &n);
        a=((((((n*567)/9)+7492)*235)/47)-498);
        tens_dig=abs(a%100)/10;
        printf("%lld\n", tens_dig);
    }
    return 0;
}
