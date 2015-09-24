/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <stdio.h>

int main()
{
    long long T,cs=0, ppl[100000], i, team;
    scanf("%lld", &T);
    while(T--){
        scanf("%lld", &team);
        for(i=1; i<=team; i++){
            scanf("%lld", &ppl[i]);
        }
        printf("Case %lld: %lld\n",++cs, ppl[i/2]);
    }
    return 0;
}
