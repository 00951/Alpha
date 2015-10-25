/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <stdio.h>
#include <math.h>

int main()
{
    long long a,b,c,cs=0,T,x,y;
    scanf("%lld",&T);
    while(T--){
        cs++;
        scanf("%lld %lld %lld", &a, &b, &c);
        if(a>=b && a>=c){
            x=a*a;
            y=b*b+c*c;
        }

        else if(b>=a && b>=c){
            x=b*b;
            y=a*a+c*c;
        }
        else{
            x=c*c;
            y=a*a+b*b;
        }

        if(x==y)
            printf("Case %lld: yes\n", cs);
        else
            printf("Case %lld: no\n", cs);
    }
    return 0;
}

