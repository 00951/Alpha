/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    int x,y,r,T;
    double dist;
    scanf("%d", &T);

    while(T--){
        scanf("%d %d %d", &x, &y, &r);
        dist=sqrt(x*x+y*y);
        printf("%.2lf %.2lf\n", r-dist, r+dist);
    }
    return 0;
}
