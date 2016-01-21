/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll big_mod(ll b, ll p, ll m){
    if(p==0)
        return 1;
    else{
        if(p%2)
            return (b%m*(big_mod(b,p-1,m)%m))%m;
        else
        {
            ll x = big_mod(b,p/2,m)%m;
            return ((x%m)*(x%m))%m;
        }
    }
}

int main()
{
    ll b,p,m,t;

    cin >> t;

    while(t--){
        cin>>b>>p>>m;
        cout << big_mod(b,p,m) << endl;
    }

    ll y;
    cin >> y;

    return 0;
}


