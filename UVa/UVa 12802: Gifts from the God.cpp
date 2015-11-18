/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define MAX 1234567
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)

LL a[MAX];

void sieve()
{
    for(LL i=2; i<=MAX; i++){
        if(a[i]==0){
            for(LL j=2*i; j<=MAX; j+=i){
                a[j]=1;
            }
        }
    }
}

LL revv(LL n){
    LL tmp=n, rev=0;
    while(tmp>0){
        rev=rev*10+tmp%10;
        tmp/=10;
    }
    return rev;
}

int main()
{
    sieve();
    LL n;

    while(cin>>n){

        cout << 2*n << endl;
        if(revv(n)==n && a[n]==0)
            break;

    }
    return 0;
}
