/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long  ll;

int main()
{
    ll T, a[12345], a2[12345], cs=0;


    while(scanf("%lld", &a[0])==1 && a[0]>=0){

        for(ll i=1; i<=12; i++){
            scanf("%lld", &a[i]);
        }
        for(ll i=1; i<=12; i++){
            scanf("%lld", &a2[i]);
        }

        printf("Case %lld:\n", ++cs);

        ll i,j;

        for(i=0, j=1; i<=11, j<=12; i++,j++){

            if(a[i]>=a2[j]){
                a[i+1]+=(a[i]-a2[j]);
                printf("No problem! :D\n");
            }
            else
            {
                a[i+1]+=a[i];
                printf("No problem. :(\n");
            }
        }
    }

    return 0;
}

