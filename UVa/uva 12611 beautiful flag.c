/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    int cs=0,r,x1,x2,y,T,l,w;
    scanf("%d", &T);

    while(T--){
        cs++;
        scanf("%d", &r);
        l=5*r;
        w=(6*l)/10;

        x1=(45*l)/(45+55);
        x2=(55*l)/(45+55);
        y=w/2;

        printf("Case %d:\n%d %d\n%d %d\n%d %d\n%d %d\n", cs, -x1, y, x2, y, x2, -y, -x1, -y);
    }
    return 0;
}
