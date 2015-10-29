/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,a,b) for(ll i=a; i<=b; i++)

int main()
{
    ll n,T,cs=0;
    string str;
    cin >> T;

    while(T--){
        cin >> n >> str;

        ll l=str.size();
        ll c=0;

        rep(i,0,l-1){
            if(str[i]=='.'){
                i+=2;
                c++;
            }
        }
        printf("Case %lld: %lld\n", ++cs, c);
    }
    return 0;
}
