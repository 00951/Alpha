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
    long long numcow, T, x, y, x1, y1, x2, y2, cs=0;
    scanf("%lld", &T);
    while(T--){
        scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);
        scanf("%lld", &numcow);
        cs++;
        printf("Case %lld:\n", cs);

        while(numcow--){
            scanf("%lld %lld", &x, &y);

            if((x>x1 && x<x2)&&(y>y1 && y<y2))
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
