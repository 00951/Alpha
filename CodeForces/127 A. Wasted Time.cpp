http://codeforces.com/problemset/problem/127/A


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)

int main()
{
    ll n,x[12345],y[12345], p;

    while(cin>>n>>p){

        rep(i,1,n){
            cin>>x[i]>>y[i];
        }

        long double sum=0.0;

        rep(i,1,n-1){
            sum+=sqrt(abs((x[i+1]-x[i])*(x[i+1]-x[i])+(y[i+1]-y[i])*(y[i+1]-y[i])));
        }

        double ans;
        ans=(sum*1.0)/(50*1.0);
        ans*=p;

        printf("%.9lf\n", ans);
    }

    return 0;
}

