/************************************************************
***                                                       ***
***   Author     : GM Arif Shuvo                          ***
***   University : CSE, Jahangirnagar University          ***
***   Handle     : aarif_shuvo (codeforces/topcoder)      ***
***                                                       ***
************************************************************/

#include <bits/stdc++.h>
#define LL  long long
using namespace std;

#define MX 12345

int main()
{

    LL ph,pm, sh,sm;

    scanf("%lld:%lld", &ph, &pm);
    scanf("%lld:%lld", &sh, &sm);

    LL diff = (pm+ph*60) - (sm+sh*60);

    if(diff<0) diff += 1440;

    printf("%.2lld:%.2lld\n", diff/60, diff%60);


    return 0;
}



///////////////------------------------------------////////////////////



int main()
{
    int h,m,i,j,a,b;
    scanf("%d:%d",&h,&m);
    scanf("%d:%d",&a,&b);
    j=a*60+b;
    while(j--)
    {
        m--;
        if(m==-1)
        {
            m=59;
            h--;
            if(h==-1)
                h=23;
        }
    }
    printf("%.2d:%.2d\n",h,m);
    return 0;
}

