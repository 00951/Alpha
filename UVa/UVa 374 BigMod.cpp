/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

#define ll long long


ll bigmod(ll b, ll p, ll m){
    if(p==0)
        return 1;
    else if(p%2==1)
        return ((b%m)*(bigmod(b, p-1, m)%m))%m;
    else {
        ll x=bigmod(b, p/2, m)%m;
        return (x*x)%m;
    }
}

int main()
{
    ll b,p,m;
    while(scanf("%lld%lld%lld", &b, &p, &m)==3){
        printf("%lld\n", bigmod(b,p,m));
    }
    return 0;
}
