[code language="cpp"]

/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    int maxwt, allegg, wtlist[100000] ,maxegg,T;
    int ans,cs=0,wt,i;

    scanf("%d",&T);

    while(T--){
            ans=0;
            wt=0;

        scanf("%d %d %d", &allegg, &maxegg, &maxwt);

        for(i=1; i<=allegg; i++){
            scanf("%d", &wtlist[i]);
        }

        for(i=1; i<=allegg; i++){

            wt+=wtlist[i];

            if(wt>maxwt || i>maxegg)
                break;

                ans++;
        }
            printf("Case %d: %d\n", ++cs, ans);
        }
    return 0;
}
