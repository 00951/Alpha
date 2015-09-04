/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online (uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <stdio.h>

int main()
{
    long long T,a,b,c,cs=0;

    scanf("%lld", &T);

    while(T--){
        scanf("%lld %lld %lld", &a, &b, &c);
            cs++;

        if(a<1 || b<1 || c<1)
            printf("Case %lld: Invalid\n", cs);
            
        else if(a+b>c && b+c>a && c+a>b){
                
            if(a==b && b==c)
                printf("Case %lld: Equilateral\n", cs);
            else if((a==b && a!=c) || (b==c && c!=a) || (c==a && a!=b))
                printf("Case %lld: Isosceles\n", cs);
            else
                printf("Case %lld: Scalene\n", cs);
        }
        else
            printf("Case %lld: Invalid\n", cs);
    }
    return 0;
}
