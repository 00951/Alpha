/*
* GM Arif Shuvo
* CSE, Jahangirnagar University
* id: aarif_shuvo(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MAX 12345
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)

ll count_dig(ll n)
{
    ll c=0;

   while(n>0){
        n/=10;
        c++;
   }
   return c;
}

int main()
{
    ll a,b;

    while(cin>>a>>b){
        cout << count_dig(a+b) << endl;
    }

    return 0;
}

