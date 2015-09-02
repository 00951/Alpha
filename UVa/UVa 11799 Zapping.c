/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <stdio.h>

int main()
{
    int T,C,N,MAX,cs=0;
    scanf("%d", &T);

    while(T--){
            cs++;
        scanf("%d", &N);
        MAX=0;
        while(N--){
            scanf("%d", &C);
            if(C>MAX)
                MAX=C;
        }
        printf("Case %d: %d\n",cs ,MAX);
    }
    return 0;
}
