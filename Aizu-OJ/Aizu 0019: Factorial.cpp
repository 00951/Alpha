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
    ll n,s;
    while(cin>>n){
            s=n;

        while(n-- && n>1) s*=n;

        cout << s << endl;
    }

    return 0;
}

