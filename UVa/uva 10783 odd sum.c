/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    int T,start,end,i,sum,cs=0;
    scanf("%d", &T);

    while(T--){
        sum=0;
        cs++;

        scanf("%d", &start);
        scanf("%d", &end);

        for(i=start; i<=end; i++){
            if(i%2)
                sum+=i;
        }
        printf("Case %d: %d\n",cs ,sum);
    }
    return 0;
}
