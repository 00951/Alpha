/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <stdio.h>

int main()
{
    int a,b,c,T,cs=0;
    scanf("%d", &T);

    while(T--){
        while(scanf("%d %d %d", &a, &b, &c)==3){
        cs++;
        if(a<=20 && b<=20 && c<=20)
            printf("Case %d: good\n",cs);
        else
            printf("Case %d: bad\n",cs);
    }
}
    return 0;
}
