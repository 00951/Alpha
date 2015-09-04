/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    int T,n,a,b,cs=0;

    while(scanf("%d", &T)==1 && T!=0){
            cs++;
            a=0,b=0;
        while(T--){
            scanf("%d", &n);
            if(n==0)
                a++;
            else
                b++;
        }
        printf("Case %d: %d\n",cs ,b-a);
    }
    return 0;
}
