/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

long long cycle_len(long long k);

int main()
{
    long long i,t=0,j,max,k,min ,c,ans=0;

    while(scanf("%lld %lld", &i, &j)==2){
            ans=0;
        if(i>j){
            max=i;
            min=j;
        }
        else {
            max=j;
            min=i;
        }
            t=0;
        for(c=min; c<=max; c++){
            t=cycle_len(c);
            if(t>=ans)
                ans=t;
        }
        printf("%lld %lld %lld\n", i, j, ans);
    }
    return 0;
}



long long cycle_len(long long k)
{
   long long count=1,x,p;

    for(;;){
            if(k==1)
                break;

            if(k%2==0)
                k=k/2;
            else
                k=3*k+1;

                count++;
    }

    return count;
}
