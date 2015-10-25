/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <stdio.h>

int main()
{
    long long num, k, T, count;

    while(scanf("%lld %lld", &T, &k)==2){


        count=0;

        while(T--){
            scanf("%lld", &num);
            if(num%k==0)
                count++;
        }
    printf("%lld\n", count);
    }

    return 0;
}


