/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define MAX 12345

int main()
{
    LL T,n,i,x,cs=1,a[MAX];
    cin>>T;
    while(T--){
        cin>>n;
        x=1;
        for(i=2; i<=n; i++){
           if(x==3)
                break;
            if(n%i==0)
                a[x++]=i;
        }
        printf("Case #%lld: %lld = %lld * %lld = %lld * %lld\n", cs++ , n, a[1], n/a[1], a[2], n/a[2]);
    }
    return 0;
}
