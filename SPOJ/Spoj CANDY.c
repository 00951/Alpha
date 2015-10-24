/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/
 
 
#include <stdio.h>
 
int main()
{
    long long T,n,i,count,arr[100000],sum,avg;
 
    while(scanf("%lld", &n)==1){
 
        if(n==-1)
            break;
 
        count=0,sum=0;
        for(i=0; i<n; i++){
            scanf("%lld", &arr[i]);
            sum+=arr[i];
        }
 
        avg=sum/n;
 
        if(n*avg!=sum){
            printf("-1\n");
            continue;
        }
 
        for(i=0; i<n; i++){
            if(arr[i]>avg){
                count+=(arr[i]-avg);
            }
        }
        printf("%lld\n", count);
    }
    return 0;
}
