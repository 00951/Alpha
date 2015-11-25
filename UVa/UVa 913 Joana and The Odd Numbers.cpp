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


int main()
{
    LL n;
    while(cin>>n){
        n=(n+2)/2;
        LL x=n*n;
        LL d=2*x-1;
        cout << d+d-2+d-4 << endl;
    }
    return 0;
}
