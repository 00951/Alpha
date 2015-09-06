/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    long long n,sum,a,b;

    while(scanf("%lld", &n)==1 && n!=0){
        for(;;){
            sum=0;
            while(n>0){
                a=n%10;
                sum+=a;
                n=n/10;
            }
            n=sum;
            if(sum<10)
                break;
        }

        printf("%lld\n", sum);
    }
    return 0;
}
