/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    long long T,cs=0,val,h,l,i,arr[100000],n;

    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        h=0,l=0;
        long long i;

        for(i=0; i<n; i++){
            scanf("%lld", &arr[i]);
        }

        for(i=0; i<n-1; i++){
            if(arr[i]>arr[i+1])
                h++;
            else if(arr[i]<arr[i+1])
                l++;
        }
        cs++;
        printf("Case %lld: %lld %lld\n",cs, l, h);
    }
    return 0;
}
