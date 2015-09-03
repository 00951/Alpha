/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    int a;
    while(scanf("%d",&a)==1){
        if(a==0)
            break;
        if(a>=101)
            printf("f91(%d) = %d\n",a ,a-10);
        else
            printf("f91(%d) = 91\n",a ,91);
    }
    return 0;
}
