/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    long long count,i,k,a,b,c,d,l;

    while(scanf("%lld %lld %lld %lld %lld", &a,&b,&c,&d,&l)==5){
        if(a==0 && b==0 && c==0 && d==0 && l==0)
            break;
        count=0;
        for(i=0; i<=l; i++){
                k=0;
            k=a*i*i+b*i+c;
            if(k%d==0)
                count++;
        }
        printf("%lld\n", count);
    }
    return 0;
}
