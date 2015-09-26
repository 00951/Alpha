/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)==1){

        if(n%6==0)      //360/(5*12)==6
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
