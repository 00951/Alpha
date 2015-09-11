/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    int i,a=1,b=2,n,ans,c;

    while(scanf("%d", &n)==1 && n!=0){

        a=3,b=2;

        if(n==1)
            ans=1;
        else if(n==2)
            ans=2;
        else if(n==3)
            ans=3;
        else {
            for(i=3; i<n; i++){
                c=a+b;
                b=a;
                a=c;
            }
            ans=c;
        }
        printf("%d\n", ans);
    }
    return 0;
}
