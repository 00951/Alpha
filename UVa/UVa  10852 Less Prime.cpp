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
LL a[MAX];

void sieve(){
    for(LL i=2; i<=MAX; i++){
        if(a[i]==0){
            for(LL j=2*i; j<=MAX; j+=i){
                a[j]=1;
            }
        }
    }
}
int main()
{
    LL n,T;
    sieve();
    cin>>T;
    while(T--){
        cin>>n;
        LL p=n/2;
        rep(i,p+1,n){
            if(a[i]==0)
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}
