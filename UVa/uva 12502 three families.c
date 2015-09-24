/*
* GM Arif
* CSE, Jhangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/
 
 
#include <stdio.h>
 
int main()
{
    long long T;
    double a,p,b,mon,ans;
 
    scanf("%lld", &T);
 
    while(T--){
        scanf("%lf %lf %lf", &a, &b, &mon);
 
        p=(a+b)/3.0;
        a=a-p;
        b=b-p;
 
        ans=(mon*a)/(a+b);
 
        printf("%.0lf\n",ans);
 
 
    }
    return 0;
}
