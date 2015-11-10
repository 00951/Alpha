/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,x[12345],y[12345], p;

    while(cin>>n>>p){

        rep(i,1,n){
            cin>>x[i]>>y[i];
        }

        double sum=0.0;

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



