#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)

ll order(ll n){
    ll c=0;
    while(n>0){
        n=n/10;
        c++;
    }
    return c;
}


ll pown(ll p, ll n){
    ll sum=1;
    rep(i,1,n){
        sum*=p;
    }
    return sum;
}

int main()
{
    ll T,n;
    cin>>T;

    while(T--){
        cin >> n;
        ll p=order(n);
        ll tmp=n;
        ll add=0;

        while(tmp>0){
            add+=pown(tmp%10, p);
            tmp/=10;
        }

        if(add==n)
            cout << "Armstrong" << endl;
        else
            cout << "Not Armstrong" << endl;
    }

    return 0;
}

