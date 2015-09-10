/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    int dur,mc,jc,T,n,cs=0;
    scanf("%d", &T);
    while(T--){
            cs++;
        scanf("%d", &n);
        int i=0;
        int mile=0, juice=0, dur1;

        while(n--){
            scanf("%d", &dur1);
            mile+=((dur1/30)+1)*10;
            juice+=((dur1/60)+1)*15;
        }

        if(mile>juice)
            printf("Case %d: Juice %d\n", cs, juice);
        else if(mile<juice)
            printf("Case %d: Mile %d\n", cs, mile);
        else if(mile==juice)
            printf("Case %d: Mile Juice %d\n",cs, mile);
    }
    return 0;
}
