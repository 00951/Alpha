/*
* GM Arif
* CSE, Jahangirnagar University
* id: gmarif_online(uva/codeforces/codechef/hackerrank/spoj/topcoder)
*/


Problem: http://codeforces.com/problemset/problem/552/B


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;

    while(cin>>n){

        ll base=10, mul=1, count=0;

        while(true){
        
            if(n/base)
                count+=mul*(base-base/10);
            else {
                count+=mul*(n-base/10+1);
                break;
            }
            
            base*=10;
            mul++;
        }
        cout << count << endl;
    }
    return 0;
}




//OR..............




#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,ans=0;

    while(scanf("%I64d", &n)==1){

        if(n<=9)
            ans=n;
        else if(n<=99)
            ans=9+(n-9)*2;
        else if(n<=999)
            ans=9+(99-9)*2+(n-99)*3;
        else if(n<=9999)
            ans=9+(99-9)*2+(999-99)*3+(n-999)*4;
        else if(n<=99999)
            ans=9+(99-9)*2+(999-99)*3+(9999-999)*4+(n-9999)*5;
        else if(n<=999999)
            ans=9+(99-9)*2+(999-99)*3+(9999-999)*4+(99999-9999)*5+(n-99999)*6;
        else if(n<=9999999)
            ans=9+(99-9)*2+(999-99)*3+(9999-999)*4+(99999-9999)*5+(999999-99999)*6+(n-999999)*7;
        else if(n<=99999999)
            ans=9+(99-9)*2+(999-99)*3+(9999-999)*4+(99999-9999)*5+(999999-99999)*6+(9999999-999999)*7+(n-9999999)*8;
        else if(n<=999999999)
            ans=9+(99-9)*2+(999-99)*3+(9999-999)*4+(99999-9999)*5+(999999-99999)*6+(9999999-999999)*7+(99999999-9999999)*8+(n-99999999)*9;
        else
            ans=8888888899;

        printf("%I64d\n", ans);
    }

    return 0;
}
