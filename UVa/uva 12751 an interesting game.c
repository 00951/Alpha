/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    int n,k,x,cs=0,ans,T;
    scanf("%d", &T);

    while(T--){
        scanf("%d %d %d", &n, &k, &x);
        cs++;
        ans=(n*(n+1))/2;
        int i,sum=0;
        for(i=x; i<=(x+k-1); i++){
            sum+=i;
        }
        printf("Case %d: %d\n", cs, ans-sum);
    }
    return 0;
}
