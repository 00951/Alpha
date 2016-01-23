/*
* GM Arif Shuvo
* CSE, Jahangirnagar University(44)
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/

#include <bits/stdc++.h>
using namespace std;
#define LL  long long
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)

#define MX 12345

int main()
{
   LL n,a[MX];
   cin>>n;
   rep(i,0,n-1)
        cin>>a[i];
    sort(a,a+n);
    rep(i,0,n-1)
        cout<<a[i]<<" ";
    cout << endl;
    return 0;
}
