/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)

LL dig_prod(LL n){
    LL prod=1;
    if(n==0)
        return 0;
    while(n>0){
        prod*=n%10;
        n/=10;
    }
    return prod;
}

int main()
{
    LL n,T,fl;
    cin>>T;

    while(T--){
        fl=0;
        cin>>n;
        LL k = sqrt(pow(10,9));
        rep(i,0,k){
            if(dig_prod(i)>n)
                break;
            if(dig_prod(i)==n){
                cout << i << endl;
                fl=1;
                break;
            }
        }
        if(fl==0)
            cout << -1 << endl;
    }
    return 0;
}
