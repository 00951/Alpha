/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/
 
 
#include <stdio.h>
#include <math.h>
 
int main()
{
    int r,c,t,sonar;
    scanf("%d", &t);
 
    while(t--){
        scanf("%d %d", &r, &c);
 
        sonar = ceil((double)(r-2)/3) * ceil((double)(c-2)/3);
 
        printf("%d\n", sonar);
    }
 
    return 0;
}
