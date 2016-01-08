/******************************************************************
***                                                             ***
***   Author     : GM Arif Shuvo                                ***
***   University : CSE, Jahangirnagar University                ***
***   Handle     : aarif_shuvo (codeforces/topcoder/codechef)   ***
***                                                             ***
******************************************************************/


#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    long long T, sum, i, x[100000],y[100000],n;

    scanf("%lld", &T);

    while(T--){
            sum=0;

        scanf("%lld", &n);

        for(i=1; i<=n; i++)
            scanf("%lld", &x[i]);

        for(i=1; i<=n; i++)
            scanf("%lld", &y[i]);


        sort(x+1, x+n+1);
        sort(y+1, y+n+1);

        for(i=1; i<=n; i++){
            sum+=x[i]*y[i];
        }

        printf("%lld\n", sum);
    }

    return 0;
}
