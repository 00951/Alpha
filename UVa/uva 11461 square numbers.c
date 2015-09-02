/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>
#include <math.h>

int main()
{
    int T,i,x,start,end,count;

    while(scanf("%d %d", &start, &end)==2){

        count=0;

        if(start==0 && end==0)
            break;

        for(i=start; i<=end; i++){
            x=sqrt(i);
            if(x*x==i)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
