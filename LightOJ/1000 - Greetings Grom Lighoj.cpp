/******************************************************************
***                                                             ***
***   Author     : GM Arif Shuvo                                ***
***   University : CSE, Jahangirnagar University(44)            ***
***   Handle     : aarif_shuvo (codeforces/topcoder/codechef)   ***
***                                                             ***
******************************************************************/


#include <stdio.h>

int main()
{
    long long a,b,cs=0,T;
    scanf("%lld",&T);
    while(T--){
            cs++;
        scanf("%lld %lld", &a, &b);
        printf("Case %lld: %lld\n",cs,a+b);
    }
    return 0;
}
