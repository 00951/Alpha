http://codeforces.com/problemset/problem/598/A


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)

ll pown(ll n){

    if(n==0)
        return 1;

    ll res=1;

       for(ll j=1;j<=n;j++){
         res=res*2;
       }

    return res;

}


int main()
{
    ll T,n;
    cin >> T;
    while(T--){
        cin>>n;
        ll ans=n*(n+1)/2;

        ll x = ceil(log(n)/log(2));
        ll sum=0;


        rep(i,0,x){
            if(pown(i)<=n)
                sum+=pown(i);

        }

        ans=ans-2*sum;

        cout << ans << endl;
    }
    return 0;
}
