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
    long long a,b,T,i,cs=0,c=0;
    
    scanf("%lld", &T);
    
    while(T--){
            c=0;

        scanf("%lld", &a);

        while(a>0){
            if(a%2==1)
                c++;
            a=a/2;
        }
        
        if(c%2)
            printf("Case %lld: odd\n", ++cs, c);
        else
            printf("Case %lld: even\n", ++cs, c);
    }
    return 0;
}
