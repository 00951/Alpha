/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

#define rep(a,b) for(ll i=a; i<=b; i++)
#define ll long long

int main()
{
    string str, arr[12345];
    ll T,n, cs=0 ;
    scanf("%lld",&T);

    while(T--){

        ll max=-1;
        ll k=0;

        rep(1,10){

            cin>>str>>n;

            if(n>=max){
                if(n!=max) k=0;
                arr[k++]=str;
                max=n;
            }
        }

        cout << "Case #" << ++cs << ":" << endl;

        rep(0,k-1)
            cout << arr[i] << endl;
    }
    return 0;
}
